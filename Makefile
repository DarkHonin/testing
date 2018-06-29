OBJ_OUT=t_obj.o frame.o
NAME:=libtest.a
LIBFT=libft

FLAGS:=-I$(LIBFT) -L$(LIBFT) -lft -Wextra -Wall -Werror

all: $(NAME)

re: fclean all

$(NAME): $(OBJ_OUT)
	@ar rc $(NAME) $(OBJ_OUT)
	@ranlib $(NAME)
	@echo "LIB MADE"

$(OBJ_OUT):
	@gcc -c $*.c $(FLAGS)
	@echo "made --> $@"

clean:
	@rm -rf $(OBJ_OUT)
	@echo "Object files cleaned";

fclean: clean
	@rm -rf $(NAME)
	@echo "Librairy removed"