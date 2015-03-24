/*
 * Xtable - Program that calculates a multiplication table from 1 t0 12.
 *
 * Author- Moses Olawoyin < m.bastford@gmail.com>
 *
 * Date -15 March 2015.
 *
 */


#include <iostream>
#include <iomanip>

int main(int argc, char *argv[])
{
  int const size = 12;
    std::cout << "     |";
    for (int x = 1; x<=size; ++x)
    {
        std:: cout <<std::setw(5)<< x <<"|";
        
    }
    std:: cout <<std::endl;

    for(int x = 0; x<=size; ++x)
    {
        std::cout << "-----+";
    }
    std::cout << std::endl;

    for(int y = 1; y<=size; ++y)
    {
        std::cout<<std::setw(5)<< y << "|";

        for (int x=1; x<=size; ++x)
        {
            std::cout<<std::setw(5)<<x*y << "|";
        }
        std::cout<< std::endl;

        for(int x =0; x<=size; ++x)
        {
            std::cout << "-----+";
        }
        std::cout <<std::endl;
    }

}
