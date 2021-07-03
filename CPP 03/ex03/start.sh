clang++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address  *.cpp -o ex03
clear
./ex03
rm -f *.o
rm -f ex03