#include <iostream>

int temp_scale(std::string option1,std::string option2,std::string option3)
{
    int scale;

    while(true)
    {
        std::cout << option1 << std::endl;
        std::cout << option2 << std::endl;
        std::cout << option3  << std::endl;

        std::cin >>scale;
        
        if(scale >=1 && scale <=3)

        {
            return scale;
        }
        else
        {
            std::cout <<"Please enter from one of the scale: " <<std::endl;
        }
        
    }
    return scale;
}

int main (int argc, char* argv[])
{
    double temperature;
    double result;
    double value;


    temperature = temp_scale("Celcius","Kelvin","Fahrenheit");
    std::cout << temperature <<std::endl;

    std::cout << "Enter the value: ";
    std::cin >> value;

    if(temperature==1)
    {
        result = (value - 32) * 1.8;

    }
    else if(temperature==2)
    {
        result = value + 273;
    }
    else if(temperature==3)
    {
        result = (1.8 * value) + 32;
    }


    std::cout << "The temperature is: " << result << std::endl;

    return 0;

}
