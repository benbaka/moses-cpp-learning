#include <iostream>

int main(int argc, char* argv[])
{
    int year;
    int month;
    int day ;
    int gender;
    int monday;
    int tuesday;
    int wednesday;
    int thursday;
    int friday;
    int saturday;
    int sunday;


    std::cout << "What year were you born?: ";
    std::cin >> year;

    std::cout << "What month were you born?: ";
    std::cout >> month;

    std::cout << "What day of the month were you born?: ";
    std::cin >> day;

    std::cout << "Are you male or female?: ";
    std::cin  >> gender;

    if(gender== male && day == monday)
    {
        std::cout << "You were born on Monday, so you are called Kwadwo" << std::endl;

    }



}
