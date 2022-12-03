NAME := libft.a
CC := gcc
CFLAGS := -c -Wall -Wextra -Werror
SRC_DIR := src/
OBJ_DIR := bin/
INCLUDES := -I./includes

SRCS =	ft_abs.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_itoa.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_min.c \
		ft_max.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memset.c \
		ft_nbrlen.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strddup.c \
		ft_strdsub.c \
		ft_strequ.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strnlen.c \
		ft_strdlen.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strsplit.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_swapcase.c \
		ft_tolower.c \
		ft_toupper.c \
		get_next_line.c

OBJS = $(addprefix $(OBJ_DIR),$(SRCS:.c=.o))

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | dir
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $^

dir:
	@mkdir -p $(OBJ_DIR)

so: $(OBJS)
	$(CC) -fPIC -c $(CFLAGS) $(SRCS) $(INCLUDES)
	gcc -shared -o libft.so $(OBJS)

clean:
	/bin/rm -rf $(OBJ_DIR)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft.so

re: fclean all

.PHONY: all clean fclean dir so
