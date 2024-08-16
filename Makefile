NAME = mini_talk

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = srcs/client.c srcs/server.c

BONUS_SERVER =   bonus/server_b.c
BONUS_CLIENT =   bonus/client_b.c

LIBS = libs/libft/libft.a libs/ft_printf/libftprintf.a

OBJ = bonus/client_b.o bonus/server_b.o srcs/client.o srcs/server.o

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libs/ft_printf
	@make -C libs/libft
	@$(CC) $(CFLAGS) srcs/server.c $(LIBS) -o server
	@$(CC) $(CFLAGS) srcs/client.c $(LIBS) -o client
	@echo "-->Objects created<--"

bonus: $(NAME) $(BONUS_SRC)
	@cd libs/libft && make
	@cd libs/ft_printf && make
	@$(CC) $(CFLAGS) $(BONUS_SERVER) $(LIBS) -o server
	@$(CC) $(CFLAGS) $(BONUS_CLIENT) $(LIBS) -o client
	@echo "-->Objects created<--"

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C libs/ft_printf
	@make clean -C libs/libft
	@rm -f $(OBJ)
	@echo "->Objects cleaned<-"

fclean: clean
	@make fclean -C libs/ft_printf
	@make fclean -C libs/libft
	@ rm -f server client
	@echo "->$(NAME) erase<-"

re: fclean all

.PHONY: all clean fclean re bonus
