NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_memmove.c \
ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_strchr.c \
ft_strdup.c \
ft_strlcat.c ft_strlen.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_strlcpy.c \
ft_tolower.c ft_toupper.c ft_calloc.c ft_itoa.c \
ft_strtrim.c ft_strjoin.c ft_substr.c ft_split.c ft_strmapi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstsize_bonus.c ft_lstdelone_bonus.c
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS)
		ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean
