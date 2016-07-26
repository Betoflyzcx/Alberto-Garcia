/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 5:28 PM
 * Purpose: write a function that references two 
 *          variables and sets them to zero
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void zero_both(int &one, int &two);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int one = 3;
    int two = 7;
    // Changes Variables to Zero
    zero_both(one,two);
    // Output new value
    cout << "\n" << one << "\n" << two << "\n";
    //Exit Stage Right!
    return 0;
}
 void zero_both(int &one,int &two)
{
    one = 0;
    two = 0;
}

