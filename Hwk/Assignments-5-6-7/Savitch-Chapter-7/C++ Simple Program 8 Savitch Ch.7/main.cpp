/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 02:54 PM
 * Purpose: State the following in the array displayed
 *          a. The array name
 *          b. The base type
 *          c. The declared array size
 *          d. The range of values that an index for this
 *             array can have
 *          e. One of the indexed variables (or elements)
 *             of the array
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
    
    //Array Size is 6 // amount of indexed values is 6
    float score[5]; // score is array name
    // base type is float
    
    score[0] = 0.656; // One indexed value of array
    
    //Output Indexed Value
    cout << "\n" << score[0]<< endl;
    
    
    //Exit Stage Right!
    return 0;
}