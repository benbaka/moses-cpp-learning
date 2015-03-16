#include <iostream>

inline double speed(double distance, double time)
{
    return (distance/time);
}

double read_double(std::string prompt )
{
    double value;

    std::cout << prompt << " : ";
    std::cin >> value;

     return value;

}


int main (int argc, char* argv[])
{
    
    double average_speed;
    double time;
    double distance;

    distance = read_double("Enter distance in meters");
    time = read_double("Enter time in seconds");
    average_speed = speed(distance,time);
    
    
    std::cout << "The average speed of the object is: " << average_speed << "m/s" <<std::endl;
    
}
