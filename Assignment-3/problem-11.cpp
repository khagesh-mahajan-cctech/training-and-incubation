#include <iostream>
#include <list>
#include <set>


/*
    Write a program to accept cardinality of set A as N, and cardinality of set B as M. 
    Then accept elements of set A and set B. Generate set C which is union of set A and set B, 
    set D which is intersection set of set A and Set B. Print set A, B, C, D, Cardinality of set C, Cardinality of set D.
*/

std::list<int> intersectionOfTwoSets(std::list<int>& listA, int N, std::list<int>& listB, int M)
{
    std::list<int>::iterator itA;
    std::list<int>::iterator itB;

    std::list<int> listD;

    itA = listA.begin();
    
    for(int i=0; i < N; ++i)
    {
        itB = listB.begin();
        for(int j=0; j < M; ++j)
        {
            if(*itA == *itB)
            {
                listD.push_back(*itA);
                break;
            }
            ++itB;
        }
        ++itA;
    }

    return listD;
}

std::list<int> unionOfTwoSets(std::list<int>& listA, int N, std::list<int>& listB, int M)
{
    std::set<int> st;
    std::list<int>::iterator itA;
    std::list<int>::iterator itB;
    std::set<int>::iterator setItr;

    std::list<int> listC;

    for(itA = listA.begin(); itA != listA.end(); ++itA)
    {
        st.insert(*itA);
    }

    for(itB = listB.begin(); itB != listB.end(); ++itB)
    {
        st.insert(*itB);
    }

    for(setItr = st.begin();  setItr != st.end(); ++setItr)
    {
        listC.push_back(*setItr);
    }

    return listC;
}

std::list<int> getList(int N)
{
    std::list<int> ls;
    std::cout << "Enter " << N <<" elements : " << std::endl;
    for(int i=0; i<N; ++i)
    {
        int num;
        std::cin >> num;
        ls.push_back(num);
    }

    std::cout << "\n****************************************************************************\n";

    return ls;
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
    int N{ 0 }, M{ 0 };
    std::list<int> listA;
    std::list<int> listB;
    std::list<int> listC;
    std::list<int> listD;

    std::cout << "Enter cardinality of set A : ";
    std::cin >> N;
    std::cout << "Enter cardinality of set B : ";
    std::cin >> M;
    
    std::cout << "\n****************************************************************************\n";

    std::cout << "Enter set A elements : " << std::endl;
    listA = getList(N);
    std::cout << "Enter set B elements : " << std::endl;
    listB = getList(M);

    listC = unionOfTwoSets(listA, N, listB, M);
    listD = intersectionOfTwoSets(listA, N, listB, M);

    std::cout << "Set A : ";
    printList(listA);

    std::cout << "Set B : ";
    printList(listB);

    std::cout << "Set C : ";
    printList(listC);

    std::cout << "Set D : ";
    printList(listD);

    std::cout << "Cardinality of set C : "  << listC.size() << std::endl;
    std::cout << "Cardinality of set D : "  << listD.size() << std::endl;
}