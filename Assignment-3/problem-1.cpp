#include <iostream>
#include <string>

/*
    Write a program to accept an integer N and calculate the sum of it's digit. 
    Please note N can have maximum 5 digits.
    input : N = 123 | output : Sum of Digits = 6
*/

int sumOfDigits(int num)
{
    int sum{ 0 };
    
    while(num != 0)
    {
        sum = sum + num % 10;
        num /= 10;
    }

    return sum;
}

int main()
{
    int num{ 0 };
    
    std::cout << "Enter number : ";
    std::cin >> num;

    int lengthOfDigits = std::to_string(num).length();

    if(lengthOfDigits > 5)
    {
        std::cout << "Number can have maximum 5 digits! " << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Sum of digit : " << sumOfDigits(num) << std::endl;
}