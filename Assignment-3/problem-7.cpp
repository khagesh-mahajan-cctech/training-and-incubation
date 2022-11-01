#include <iostream>
#include <list>
#include <vector>

/*
    Write a program to a accept a list of N integers. 
    Find the largest and the smallest number in the list and their respective positions in the list.
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

void findSmallestAndLargest(std::list<int>& ls)
{
    std::vector< std::pair<int, int>> vec{{0,0}, {0,0}};
    std::list<int>::iterator it;

    vec[0].second = ls.front();
    vec[1].second = ls.front();

    int n = ls.size();

    it = ls.begin();
    for(int i=0; i<n; ++i)
    {
        if(*it > vec[0].second)
        {
            vec[0] = {i, *it};
        }
        else if(*it < vec[1].second)
        {
            vec[1] = {i, *it};
        }
        it++;
    }

    std::cout << "Smallest Number : " << vec[1].second  << "   " << ",  Position : " <<  vec[1].first + 1 << std::endl; 
    std::cout << "Larget Number : " << vec[0].second  << "   " << ",  Position : " << vec[0].first + 1 << std::endl;

}

int main()
{
    std::list<int> ls;
    int N{ 0 };
    std::cout << "Enter no. of integers : ";
    std::cin >> N;

    ls = getList(N);
    findSmallestAndLargest(ls);
}