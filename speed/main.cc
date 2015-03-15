#include <iostream>

int main (int argc, char* argv[])
{
    double distance;
    double time;
    double average_speed;

    std::cout << "Enter the distance in meters: ";
    std::cin >> distance;

    std::cout << "Enter the time of movement in seconds: ";
    std::cin >> time;

    average_speed = distance * time;

    std::cout << "The average speed of the object is: " << average_speed << "m/s" <<std::endl;
}
