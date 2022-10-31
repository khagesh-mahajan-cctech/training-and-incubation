#include <iostream>
#include <string>
#include <algorithm>

/*
    Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N.
    Please note N can have maximum 5 digits. Print the numbers N & M. Compare N with M and print the result.
    input : N = 1234 | output : M = 4321, M is greater than N.
*/

int reverseNumber(int N)
{
    std::string numStr = std::to_string(N);
    std::reverse(numStr.begin(), numStr.end());
    
    return std::stoi(numStr);
}

int main()
{
    int N{ 0 };
    
    std::cout << "Enter number : ";
    std::cin >> N;
    int M = reverseNumber(N);
    std::cout << "N = " << N << ", M = " << M << std::endl;
    if(M > N)
        std::cout << "M is greater than N !" << std::endl;
    else
        std::cout << "N is greater than M !" << std::endl;
}
