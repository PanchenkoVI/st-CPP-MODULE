clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address  *.cpp -o ex00
clear
./ex00
rm -f *.o
rm -f ex00