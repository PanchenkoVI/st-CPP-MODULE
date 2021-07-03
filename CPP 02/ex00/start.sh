rm -f *.o
rm -f ex00
clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address main.cpp Fixed.cpp -o ex00
clear
./ex00
rm -f *.o
rm -f ex00