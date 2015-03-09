/*
 * Askname - A program that the user to enter  and then great them
 *
 * Author Moses Olawoyin <m.bastford@gmail.com>
 *
 * Date - 07 March 2015
 *
 */
#include <iostream>


int main (int argc, char *argv[])
{
    std::string name;

    std::cout << "What is your name? ";
    std::cin >> name;

   if(name != "")
   {
       std::cout << "How are you, " <<  name <<std::endl;
   } 
   else
   {
       std::cout << "Howdy, coward" << std::endl;

   }

   return 0;
}
