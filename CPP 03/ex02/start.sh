clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address  *.cpp -o ex02
clear
./ex02
rm -f *.o
rm -f ex02