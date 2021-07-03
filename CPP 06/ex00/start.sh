make
clear
echo "#======>./ex00 a"
./ex00 a
echo "#======>./ex00 c"
./ex00 c
echo "#======>./ex00 f"
./ex00 f
echo "#======>./ex00 0"
./ex00 0
echo "#======>./ex00 42"
./ex00 42
echo "#======>./ex00 -42"
./ex00 -42
echo "#======>./ex00 0.0f"
./ex00 0.0f
echo "#======>./ex00 4.2f"
./ex00 4.2f
echo "#======>./ex00 -4.2f"
./ex00 -4.2f
echo "#======>./ex00 -inf"
./ex00 -inf
echo "#======>./ex00 inf"
./ex00 inf
echo "#======>./ex00 nan"
./ex00 nan
echo "#======>./ex00 2147483647"
./ex00 2147483647
echo "#======>./ex00 -2147483648"
./ex00 -2147483648
echo "#======>./ex00 2147483650"
./ex00 2147483650
echo "#======>./ex00 -2147483650"
./ex00 -2147483650
echo "#======>./ex00 98234243243434343434345"
./ex00 9823424324343434343434
echo "#======>./ex00 -98234243243434343434345"
./ex00 -9823424324343434343434
echo "#======>./ex00 --98234243243434343434345"
./ex00 --9823424324343434343434
# # # # # # # # # # # # # # # # # # # # # # # # # # 
echo "#======>./ex00 42.000000000"
./ex00 42.000000000
echo "#======>./ex00 1.000000000"
./ex00 1.000000000
echo "#======>./ex00 1.000000000000000000000000000"
./ex00 1.000000000000000000000000000
echo "#======>./ex00 \" \""
./ex00 " "
echo "#======>./ex00 ' '"
./ex00 ' '
echo "#======>./ex00 1.f"
./ex00 1.f
echo "#======>./ex00 1.0f"
./ex00 1.0f
echo "#======>./ex00 9.f"
./ex00 9.0f
echo "#======>./ex00 1.f"
./ex00 1.00000000000000000000000000000f
# # # # # # # # # # # # # # # # # # # # # # # # # # 
echo "#======> INVALID ARG"
echo "#======>./ex00 ''"
./ex00 ""
echo "#======>./ex00 \"\""
./ex00 ''
echo "#======>./ex00 1.0df"
./ex00 1.0df
echo "#======>./ex00 1.0dddddddf"
./ex00 1.0dddddddf
echo "#======>./ex00 \"  \""
./ex00 "  "
echo "#======>./ex00 '  '"
./ex00 '  '
echo "#=> ./ex00 nankl"
./ex00 nankl
echo "#=> ./ex00 ff"
./ex00 ff
echo "#=> ./ex00 fsdfsdfdfsdfsdfsdfsdfsfsdf"
./ex00 fsdfsdfdfsdfsdfsdfsdfsfsdf
echo "#=> ./ex00 23dsdfd"
./ex00 23dsdfd
echo "#=> ./ex00 23dsdfd3"
./ex00 23dsdfd3
echo "#=> ./ex00 s233"
./ex00 s233
echo "#=> ./ex00 233.d00000000000000000"
./ex00 233.d00000000000000000
echo "#=> ./ex00 233.0000000p0000000000"
./ex00 233.d000000000p00000000
echo "#=> ./ex00 233.00000000000000000p"
./ex00 233.d00000000000000000p
echo "#======>"
make fclean