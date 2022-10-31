#include <iostream>
#include <string>
#include <algorithm>

/*
    Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N.
    Please note N can have maximum 5 digits.
    input : N = 123 | output : M = 321
    input : N = 100 | output : M = 1
*/

int reverseNumber(int N)
{
    std::string numStr = std::to_string(N);
    std::reverse(numStr.begin(), numStr.end());
    
    int M = std::stoi(numStr);
    return M;
}

int main()
{
    int N{ 0 };
    
    std::cout << "Enter number : ";
    std::cin >> N;

    std::cout << "M = " << reverseNumber(N) << std::endl;
}
