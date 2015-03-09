/*
 * Area - Program that ask the user to enter the width and height of a rectangle
 *        and then calculate the area of the rectangle.
 *
 *  Author - Moses Olawoyin <m.bastford@gmail.com>
 *  Date - 05 March 2015.
 */
#include <iostream>

int main (int argc, char *argv[])
{
    int height;
    int width;
    int area;

    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    area = width * height;

    std::cout << " The Area of the rectangle is:" << area << std::endl;

    return 0;

}
