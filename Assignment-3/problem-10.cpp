#include <iostream>
#include <list>

/*
    Write a program to accept a list L1 of N integers. 
    Accept integer D. Generate list L2 such that it contains only those integers from list L1 which are divisible by D. 
    Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.

    input : 
    N=8, L1=(10,44,9,23,64,56,78,27), D=3

    output :
    L1=(10,44,9,23,64,56,78,27), N=8, D=3, L2=(9,78,27), Size of L2=3
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

std::list<int> getSecondList(int n, std::list<int>& ls, int D)
{
    std::list<int> ls2;
    std::list<int>::iterator it;
    for(it = ls.begin(); it != ls.end(); ++it)
    {
        if(*it % D == 0)
        {
            ls2.push_back(*it);
        }
    }

    return ls2;
}

void printList(std::list<int>& ls)
{
    std::list<int>::iterator it;
    for(it = ls.begin(); it != ls.end(); ++it)
    {
        std::cout << *it << "  ";
    }

    std::cout << "\n****************************************************************************\n";
}

int main()
{
    std::list<int> list1;
    std::list<int> list2;
    int N{ 0 };
    int D{ 0 };
    std::cout << "Enter no. of integers : ";
    std::cin >> N;

    list1 = getList(N);

    std::cout << "Enter divisibility factor : ";
    std::cin >> D;
    std::cout << "\n****************************************************************************\n";
    list2 = getSecondList(N, list1, D);

    std::cout << "List-1 : " << std::endl;
    printList(list1);

    std::cout << "Size of list-1 : " << N << std::endl;
    std::cout << "\n****************************************************************************\n";

    std::cout << "Divisibility factor : " << D << std::endl;
    std::cout << "\n****************************************************************************\n";

    std::cout << "List-2 : " << std::endl;
    printList(list2); 

    std::cout << "Size of list-2 : " << list2.size() << std::endl;
}