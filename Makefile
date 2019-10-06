NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LDFLAGS=-L.
LDLIBS=-lft
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c \
ft_strdup.c \
ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c \
ft_strncpy.c ft_strnstr.c ft_strrchr.c \
ft_strstr.c ft_tolower.c ft_toupper.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean clean
