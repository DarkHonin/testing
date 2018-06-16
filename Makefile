OBJ_OUT:= comparason.o
NAME:=libtest.a

$(NAME): $(OBJ_OUT)
	@ar rc $(NAME) $(OBJ_OUT)
	@ranlib $(NAME)
	@echo "LIB MADE"

$(OBJ_OUT):
	@gcc -c $*.c -o $(OBJ_OUT)
	@echo "made --> $@"

clean:
	@rm -rf $(OBJ_OUT)
	@echo "Object files cleaned";

fclean: clean
	@rm -rf $(NAME)
	@echo "Librairy removed"