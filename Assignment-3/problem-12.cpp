#include <iostream>
#include <vector>
#include <algorithm>

/*
    Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle. 
    Select appropriate data structure and explain why you chose it. 
    Arrange the circles in increasing order of their area and print all the data of each circle.	
*/

/*
1) In this example, I used structure/struct as a data structure for implementing circle.
2) In this example, we need radius, and two co-ordinates of multiple circles. Also we have calculate area of the each circle. 
    So for this multiple data the struct is best suitable. 
3) In this case if we used map, then we have to used map of vector or map of vector of pairs etc.
    So, this increases complication to implementing and understanding of code.
    So, I chose struct as a data structure.

*/


#define PI 3.141

struct Circle
{
    double radius;
    std::pair<float, float> coordinate;
    double area;

    Circle()
    {
        radius = 0;
        coordinate = std::make_pair(0,0);
        area = 0;
    }
};

Circle getCircleData()
{
    Circle circle;
    float x, y;

    std::cout << "Enter radius of circle in meter : ";
    std::cin >> circle.radius;

    std::cout << "Enter Co-ordinates of center of circle : " << std::endl;
    std::cout << "X co-ordinate : ";
    std::cin >> x;
    std::cout << std::endl;
    std::cout << "Y co-ordinate : ";
    std::cin >> y;

    circle.coordinate = std::make_pair(x,y);

    return circle;
}

void calculateAreaOfCircle(Circle& circle)
{
    circle.area = PI * circle.radius * circle.radius;
}

void displayDataOfCircle(Circle& circle)
{
    std::cout << "Radius of circle : " << circle.radius << " meter" << std::endl;
    std::cout << "Co-ordinate of center of the circle -> (X,Y) : (" << circle.coordinate.first 
            << ", " << circle.coordinate.second << ") " << std::endl;
    std::cout << "Area of circle : " << circle.area << " Sq.meter"<< std::endl;
}

bool compareBasedOnArea(const Circle& firstCircle, const Circle& nextCircle)
{
    return firstCircle.area < nextCircle.area;
}

int main()
{
    int N{ 0 };
    std::vector<Circle> circle;
    std::cout << "Enter no. of circles : ";
    std::cin >> N;
    std::cout << "\n*********************************************************************************\n";

    for(int i=0; i<N; ++i)
    {
        circle.push_back(Circle());
        std::cout << "Enter data of circle-" << i + 1 << " : "<< std::endl;

        circle[i] = getCircleData();

        calculateAreaOfCircle(circle[i]);
        std::cout << "\n*********************************************************************************\n";
    }

    std::sort(circle.begin(), circle.end(), compareBasedOnArea);

    std::cout << "\n*********************************************************************************\n";
    std::cout << "Circles data in increasing order based on area of cicles :-" << std::endl;
    std::cout << "\n*********************************************************************************\n";

    for(int i=0; i < N; ++i)
    {
        std::cout << "Data of circle-" << i + 1 << " : "<< std::endl;
        displayDataOfCircle(circle[i]);
        std::cout << "\n*********************************************************************************\n";
    }
}