#include <iostream>
#include <string>

/*
    Write a program to accept 5 digit integer N and calculate the sum of it's first and fifth digit.
    input : N = 12345, output : sum of first and fifth digit = 1 + 5 = 6.
*/

void digitSum(int N)
{
    std::string numStr = std::to_string(N);
    
    int firstDigit = (int)numStr[0] - 48;
    int fifthDigit = (int)numStr[4] - 48;

    std::cout << firstDigit << " + " << fifthDigit << " = "  << firstDigit + fifthDigit << std::endl;
}

int main()
{
    int N{ 0 };
    
    std::cout << "Enter 5 digit number : ";
    std::cin >> N;
    digitSum(N);
}