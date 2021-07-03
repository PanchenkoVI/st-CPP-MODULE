NAME = megaphone

FLAG = -Wall -Wextra -Werror -std=c++98

KP = clang++

SRCS = megaphone.cpp

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(KP) $(FLAG) $(SRCS) -o $(NAME)
	@echo "\033[32mCompilation $(NAME): OK\033[0m"

clean:
	@rm -f $(OBJS)
	@echo "\033[32mDeletion: OK\033[0m" 

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re