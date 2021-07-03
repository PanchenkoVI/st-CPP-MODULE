clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address  *.cpp -o ex04
clear
./ex04
rm -f *.o
rm -f ex04