NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_tolower.c ft_toupper.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		  ft_isprint.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strncmp.c \
		  ft_strlcpy.c ft_strlcat.c ft_memcmp.c ft_strmapi.c ft_substr.c \
		  ft_strnstr.c ft_strjoin.c ft_strrchr.c ft_strchr.c ft_putchar_fd.c\
		  ft_split.c ft_strdup.c ft_itoa.c ft_memset.c ft_memmove.c \
		  ft_memcpy.c ft_memchr.c ft_calloc.c ft_striteri.c ft_bzero.c \
		  ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strtrim.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\


OBJ = $(SOURCES:%.c=%.o)
B_OBJ = $(BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^

bonus: $(NAME) $(B_OBJ)
	@ar rcs $(NAME) $(B_OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(B_OBJ)
	@echo "Objects cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) erased"

re: fclean all bonus

.PHONY: all clean fclean re bonus
