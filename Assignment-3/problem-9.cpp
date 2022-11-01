#include <iostream>
#include <list>

/*
    Write a program to accept a list L1 of N integers. 
    Accept integer M. Multiply each integer in the list by M and generate a new list L2. Print the lists L1 and L2.

    input : N=4, L1=(4,2,1,8), M=5
    output : L1=(4,2,1,8), L2=(20,10,5,40)
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

std::list<int> getSecondList(int n, std::list<int>& ls, int m)
{
    std::list<int> ls2;
    std::list<int>::iterator it;
    for(it = ls.begin(); it != ls.end(); ++it)
    {
        ls2.push_back(*it * m);
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
    int M{ 0 };
    std::cout << "Enter no. of integers : ";
    std::cin >> N;

    list1 = getList(N);

    std::cout << "Enter multiplying factor : ";
    std::cin >> M;
    std::cout << "\n****************************************************************************\n";
    list2 = getSecondList(N, list1, M);

    std::cout << "List-1 : " << std::endl;
    printList(list1);
    std::cout << "List-2 : " << std::endl;
    printList(list2); 
}