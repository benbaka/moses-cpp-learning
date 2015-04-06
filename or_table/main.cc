#include <iostream>
#include <iomanip>

int main ( int argc, char *argv[])
{
    
   std::cout<<std::setw(8) <<"A|" ;
   std::cout<<std::setw(8) <<"B|" ;
   std::cout <<std::setw(8)<< "A OR B" << std::endl;

    
    std::cout<<std::setw(8) << "-------+";
    std::cout <<std::setw(8)<< "-------+";
    std::cout << "--------" << std::endl;

    std::cout<<std::setw(8) << "0|";
    std::cout<<std::setw(8) << "0|";
    std::cout <<std::setw(8)<< "0" << std::endl;

    std::cout<<std::setw(8) << "0|";
    std::cout <<std::setw(8)<< "1|";
    std::cout <<std::setw(8)<< "1" << std::endl;


    std::cout <<std::setw(8) << "1|";
    std::cout <<std::setw(8) << "1|";
    std::cout <<std::setw(8) << "1" << std::endl;

    std::cout << std::setw(8) << "1|";
    std::cout << std::setw(8) << "0|";
    std::cout << std::setw(8) << "1"<< std::endl;


}
