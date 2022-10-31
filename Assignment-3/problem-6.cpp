#include <iostream>

/*
    Accept cost price(CP) and Selling price(SP) of an item. 
    Calculate the ammount of PROFIT/LOSS made by the seller and print the profit or loss.
*/

void findProfitOrLoss(float cp, float sp)
{
    if(cp > sp)
        std::cout << "Loss = " << cp - sp << std::endl;
    else
        std::cout << "Profit = " << sp - cp << std::endl;
}

int main()
{
    float cp{ 0 };
    float sp{ 0 };
    std::cout << "Enter cost price of an item : ";
    std::cin >> cp;
    std::cout << "Enter selling price of an item : ";
    std::cin >> sp;

    findProfitOrLoss(cp, sp);
}