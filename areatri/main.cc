/*
 *
 * Area - Program that ask the user to enter the height and the width of
 *        triangle and print out the the area.
 *
 * Author - Moses Olawoyin <m.bastford@gmail.com
 * Date - 05 March 2015
 */

#include <iostream>


int main ( int argc, char *argv[])
{
    int width;
    int height;
    int area;

    std::cout <<"Enter the height" << std::endl;
    std::cin >> height;

    std::cout <<"Enter the width"<< std::endl;
    std::cin >> width;

    area = (height * width)/2;

    std::cout << "The area of the triangle is :"<< area << std::endl;

    return 0;
}
