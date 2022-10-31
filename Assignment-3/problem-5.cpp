#include <iostream>
#include <string>
#include <algorithm>


/*
    Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.
    input : N = 11234, output : M = 22345.
*/

void increaseDigitsByOne(int N)
{
    std::string str;
    while(N != 0)
    {
        str += std::to_string(N % 10 + 1);
        N /= 10;
    }

    std::reverse(str.begin(), str.end());
    int M = std::stoi(str);
    std::cout <<"M = " << M << std::endl;
}

int main()
{
    int N{ 0 };
    
    std::cout << "Enter 5 digit number : ";
    std::cin >> N;
    increaseDigitsByOne(N);
}