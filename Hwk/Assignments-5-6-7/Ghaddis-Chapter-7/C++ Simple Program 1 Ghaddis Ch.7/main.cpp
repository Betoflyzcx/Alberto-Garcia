/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 6:30 AM
 * Purpose: Define a class object named sally that passes the value 25 to 
 *          the constructor
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants


class sally
{
public:
     sally(int x) // Constructor
     {
        cout << "\n" << x << "was entered!" << endl; // outputs value entered
     }
     

};
//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables

    sally Start(25); // makes instance of class sally 
 
    //Exit Stage Right!
    return 0;
}
