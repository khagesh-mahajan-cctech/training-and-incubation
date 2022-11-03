#include <iostream>
#include <string>
#include <algorithm>


/*
    Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.
    input : N = 11234, output : M = 22345.
    input : N = 56789, output : M = 67890.
*/

void increaseDigitsByOne(int N)
{
    std::string str;
    while(N != 0)
    {
        int num = N % 10;

        if(num == 9)
           str += std::to_string(0); 
        else
            str += std::to_string(num + 1);
        
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

    int lengthOfDigits = std::to_string(N).length();

    if(lengthOfDigits > 5)
    {
        std::cout << "N can have maximum 5 digits! " << std::endl;
        return EXIT_FAILURE;
    }

    increaseDigitsByOne(N);
}