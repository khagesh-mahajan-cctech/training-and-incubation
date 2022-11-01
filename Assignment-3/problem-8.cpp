#include <iostream>
#include <list>

/*
    Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position.

    input : 
    N = 8, List = 82, 11, 55, 20, 10, 45, 50, 60
    K = 3

    output :
    Kth smallest integer = 20,
    position of the Kth smallest intger = 4
*/

std::list<int> getList(int N)
{
    std::list<int> ls;
    std::cout << "Enter " << N <<" integers : " << std::endl;
    for(int i=0; i<N; ++i)
    {
        int num;
        std::cin >> num;
        ls.push_back(num);
    }

    std::cout << "\n****************************************************************************\n";

    return ls;
}

int findKthSmallest(std::list<int> li, int k)
{
    li.sort();

    std::list<int>::iterator it = li.begin();
    std::advance(it, k-1);

    return *it;
}

int positionOfKthSmallestInteger(std::list<int>& ls, int smallestElement, int size)
{
    std::list<int>::iterator it = ls.begin();

    for(int i=0; i<size; ++i)
    {
        if(*it == smallestElement){
            return i;
        }
        
        ++it;
    }

    return -1;
}

int main()
{
    std::list<int> ls;
    int N{ 0 };
    std::cout << "Enter no. of integers : ";
    std::cin >> N;

    ls = getList(N);

    int K;

    std::cout << "Enter how much smallest number need to find : ";
    std::cin >> K;

    int smallestElement  = findKthSmallest(ls, K);
    int position = positionOfKthSmallestInteger(ls, smallestElement, N);

    std::cout << "Kth smallest integer : " << smallestElement << std::endl;
    std::cout << "Position of the " << K <<"th smallest integer : " << position + 1 << std::endl;

}