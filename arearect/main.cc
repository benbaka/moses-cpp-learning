/*
 * Area - Program that ask the user to enter the width and height of a rectangle
 *        and then calculate the area of the rectangle.
 *
 *  Author - Moses Olawoyin <m.bastford@gmail.com>
 *  Date - 05 March 2015.
 */
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
    int height;
    int width;
    int area;

    cout << "Enter the height of the rectangle: ";
    cin >> height;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    area = width * height;

    cout << " The Area of the rectangle is:" << area << endl;

    return 0;

}
