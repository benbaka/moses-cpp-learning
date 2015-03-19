/*
 * Area - A program that ask the user to enter the radius and then calculate 
 *       the area of the circle.
 *
 * Author - Moses Olawoyin <m.bastford@gmail.com>
 *
 * Date - 08 March 2015.
 */

#include <iostream>

double read_double(std::string prompt)
{
    double value;

    std::cout << prompt << ":";
    std::cin >> value;

    return value;
}

double circle_area( double r)
{
 
    const double PI = 3.142;

    return r*r*PI;

}

int main(int argc, char *argv[])
{  

    double r;
    double area;
    double radius;

     radius = read_double("Enter radius");
     area = circle_area(r);

    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;

}
