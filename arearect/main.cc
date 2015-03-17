/*
 * Area - Program that ask the user to enter the width and height of a rectangle
 *        and then calculate the area of the rectangle.
 *
 *  Author - Moses Olawoyin <m.bastford@gmail.com>
 *  Date - 05 March 2015.
 */
#include <iostream>

int read_int(std::string prompt)
{
    int value;

    std::cout << prompt <<" : ";
    std::cin >> value;

    return value;

}

int main (int argc, char *argv[])
{
    int height;
    int width;
    int area;

    height = read_int("Enter the height: ");
    width = read_int("Enter the width: ");

    area = width * height;

    std::cout << " The Area of the rectangle is:" << area << std::endl;

    return 0;

}
