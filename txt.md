### colab

%%writefile test.cpp

%%writefile input.txt

!g++ -std=c++17 -Wall -o test test.cpp
!./test < input.txt
!cat output.txt
