#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include "libft.h"
# define MAX_FD 1024
# define BUFF_SIZE 32

int		get_next_line(const int fd, char **line);

#endif
