/* **************************************************************************
** get_next_line(const int fd, char **line) is function that return a line
** read from a file descriptor without knowing its size beforehand. "Line"
** is succession of characters that end with '\n' but is returned without '\n'
** It also supports multiple file descriptors without losing the reading
** thread on each of the descriptors
**
** Return values:
** 		1 = line has been read
**		0 = End of File(EOF) is reached
**	   -1 = Error
*/

#include "get_next_line.h"

/* *************************************************************************
** Verify, if the HEAP still constains a newline(= hasn't reached '\0'),
**
** If so, duplicate HEAP to LINE and free HEAP,
** then return one(1) to indicate that file hasn't ended yet.
**
** Otherwise return zero(0), to indicate that EOF(End Of File)
** has reached.
*/

static int	gnl_verify(char **heap, char **line, int ret)
{
	if (ret == 0 && *heap[0] != '\0')
	{
		*line = ft_strdup(*heap);
		ft_strdel(&*heap);
		return (1);
	}
	ft_strdel(&*heap);
	return (0);
}

/* *************************************************************************
** Attempt to read number of bytes from the file descpriptor.
** 		If successful enter loop, concatenate HEAP and TMP. Delete HEAP.
** 		And try to find '\n' from buffer, if not found continue reading and go
**		back to start of loop.
**		If '\n' is found, duplicate content of temp until '\n', store rest of
** 		data after '\n' to HEAP, free TMP and return one (1) to indicate that
**      line has been read.
**
**		If there is no more data in file descriptor exit loop.
**
** Move to gnl_verify to check is file have actually ended
*/

static int	gnl_read(int fd, char **heap, char **line)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;
	int		ret;

	ret = read(fd, buff, BUFF_SIZE);
	while (ret > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strjoin(*heap, buff);
		ft_strdel(&*heap);
		if (ft_strchr(buff, '\n'))
		{
			*line = ft_strddup(tmp, '\n');
			*heap = ft_strdsub(buff, '\n');
			free(tmp);
			return (1);
		}
		*heap = tmp;
		ret = read(fd, buff, BUFF_SIZE);
	}
	if (ret == -1)
		return (-1);
	return (gnl_verify(&*heap, &*line, ret));
}

/* ----------------------------------------------
** Check if HEAP contains '\n'
**
** If so, duplicate its content until '\n',
** store rest of data in TMP and clear HEAP.
** Then data from TMP back to HEAP and return
** one (1), to indicate that line has been read.
**
** Otherwise move to gnl_read()
*/

int	get_next_line(const int fd, char **line)
{
	static char	*heap[MAX_FD];
	char		*tmp;

	if (fd < 0 || fd > MAX_FD || !line)
		return (-1);
	if (!heap[fd])
		heap[fd] = ft_strnew(0);
	if (ft_strchr(heap[fd], '\n'))
	{
		*line = ft_strddup(heap[fd], '\n');
		tmp = ft_strdsub(heap[fd], '\n');
		ft_strdel(&heap[fd]);
		heap[fd] = tmp;
		return (1);
	}
	return (gnl_read(fd, &heap[fd], &*line));
}
