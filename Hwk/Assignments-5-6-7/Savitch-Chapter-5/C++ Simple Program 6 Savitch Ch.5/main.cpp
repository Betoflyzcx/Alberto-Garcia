/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 6:22 PM
 * Purpose: Assert the statement cannot be divided 
 *          by zero
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int x = 4;
    int y = 7;
    int z = 23;
    
    if(z > 0|| z < 0) // If z is 0 this won't happen
    {
        x = (x*y/z);
        cout << "\n" << x<< endl;
    }
    // If z is zero displays this warning message
    else cout << "\nz is zero need to change that else error will occur\n";
    //Exit Stage Right!
    return 0;
}
