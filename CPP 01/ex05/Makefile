NAME = ex05

SRCS = Brain.cpp main.cpp Human.cpp 

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

	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re