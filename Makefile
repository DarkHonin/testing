OBJ_OUT:=comparason.o test_obj.o
NAME:=libtest.a
LIBFT=libft

all: $(NAME)

dep_add: 

re: fclean $(NAME)

$(NAME): $(OBJ_OUT)
	@ar rc $(NAME) $(OBJ_OUT)
	@ranlib $(NAME)
	@echo "LIB MADE"

$(OBJ_OUT):
	gcc -c $*.c -I$(LIBFT) -L$(LIBFT) -lft
	@echo "made --> $@"

clean:
	@rm -rf $(OBJ_OUT)
	@echo "Object files cleaned";

fclean: clean
	@rm -rf $(NAME)
	@echo "Librairy removed"