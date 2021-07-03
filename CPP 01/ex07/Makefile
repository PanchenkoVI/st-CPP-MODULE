NAME = replace

SRCS = main.cpp

FLAG =  -Wall -Wextra -Werror -std=c++98 -fsanitize=address

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@clang++ $(FLAG) $(OBJS) -o $(NAME)
	@echo "\033[32mCompilation $(NAME): OK\033[0m"

clean:
	@rm -f $(OBJS)
	@echo "\033[32mDeletion: OK\033[0m" 

fclean: clean
	@rm -f *.replace
	@rm -f $(NAME)

re: fclean all

test1:
	./replace test1 a A

.PHONY: all clean fclean re