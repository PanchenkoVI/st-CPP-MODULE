rm -f *.o
rm -f ex01
clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address main.cpp Fixed.cpp -o ex01
clear
./ex01
rm -f *.o
rm -f ex01