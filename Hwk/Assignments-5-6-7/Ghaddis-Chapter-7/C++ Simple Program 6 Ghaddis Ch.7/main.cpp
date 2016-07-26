/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 6:45 AM
 * Purpose: 
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <string> // String Library
using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants

struct Movie
{
    string name;
    string m_dtor;
    int yr_r;
};
//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    
    Movie One;
    // Output
    cout << "Enter the following information about your "
    << " favorite movie.\n" << "Name: ";
    cin >> One.name; 
    cout << "Director: ";
    cin >> One.m_dtor;
    cout << "Year of Release: ";
    cin >> One.yr_r;
    cout << "\nHere is information on your favorite movie:\n";
    cout << One.name << "\n" << One.m_dtor << "\n" << One.yr_r;
            

            
    //Exit Stage Right!
    return 0;
}
