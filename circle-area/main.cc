/*
 * Area - A program that ask the user to enter the radius and then calculate 
 *       the area of the circle.
 *
 * Author - Moses Olawoyin <m.bastford@gmail.com>
 *
 * Date - 08 March 2015.
 */

#include <iostream>
double circle_area( double r)
{
    const double PI = 3.142;

    return r*r*PI;

}

int main(int argc, char *argv[])
{  

    double r;
    double area;
    const double PI = 3.142;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    area = circle_area(r);

    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;

}
