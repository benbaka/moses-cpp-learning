/*
 * Word count - Programs that calculates the number of inputs.
 *
 * Author - Moses Olawoyin <m.bastford@gmail.com>
 *
 * Date - March 20th, 2015.
 *
 */


#include <iostream>

int main (int argc, char* argv[])

{
    int i;
    std::cout << "I got " << argc -1 << " Command-line arguments.They are:"<< std::endl;
    
    for( int i = 1; i<argc; ++i)
    {
        std::cout << i <<"."<< argv[i]<<std::endl;
    }


    return 0;
}
