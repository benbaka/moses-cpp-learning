/*
 *
 * Area - Program that ask the user to enter the height and the width of
 *        triangle and print out the the area.
 *
 * Author - Moses Olawoyin <m.bastford@gmail.com
 * Date - 05 March 2015
 */

#include <iostream>
using namespace std;

int main ( int argc, char *argv[])
{
    int width;
    int height;
    int area;

    cout <<"Enter the height" << endl;
    cin >> height;

    cout <<"Enter the width"<< endl;
    cin >> width;

    area = (height * width)/2;

    cout << "The area of the triangle is :"<< area << endl;

    return 0;
}
