/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 06:56 PM
 * Purpose: Write a function called timesTen that 
 *          displays the product of a number inserted 
 *          into the parameters times 10
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void timesTen(int number);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int x;
    // Input the number to multiply by 10
    cout << "\n Enter a number to multiply by ten \n ";
    cin >> x;
    timesTen(x); //Will Multiply the number inputed by ten 
    
    //Exit Stage Right!
    return 0;
}
void timesTen(int number)
{
   // Outputs the number inputed times 10
    
   cout << "\nThe product is: " <<  number*10 << endl;
}