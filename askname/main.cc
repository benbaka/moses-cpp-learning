/*
 * Askname - A program that the user to enter  and then great them
 *
 * Author Moses Olawoyin <m.bastford@gmail.com>
 *
 * Date - 07 March 2015
 *
 */
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
    string name;

    cout << "What is your name? ";
    cin >> name;

   if(name != " ")
   {
       cout << "How are you, " <<  name <<endl;
   } 
   else
   {
       cout << "Howdy, coward" << endl;

   }

   return 0;
}
