/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 05:00 PM
 * Purpose: Write the output of the following code 
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
    float a[3] = {1.1, 2.2, 3.3};
    
    //Outputs 3 elements of the array
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
    a[1] = a[2]; // changes the second element to equal the third
    // Now Outputs a different value for the second element
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
    /* Output :[ 1.1 2.2 3.3 ]
               [ 1.1 3.3 3.3 ] */
    //Exit Stage Right!
    return 0;
}
