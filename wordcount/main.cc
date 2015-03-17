#include <iostream>

int main( int argc, char* argv[])
{
    std::cout << "Got " << argc << " command line arguement"<< std::endl;
    std::cout << "They are: "<< std::endl;

    for(int i = 0; i<argc; i++)
    {
        std::cout << argv[i] <<std::endl;
    }

    return 0;
}
