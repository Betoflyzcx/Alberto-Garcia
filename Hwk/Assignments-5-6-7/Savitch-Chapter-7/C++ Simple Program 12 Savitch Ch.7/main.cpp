/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 05:56 PM
 * Purpose: Find out what is produced by the following code
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
    int my_array[4][4], index1, index2;
    
     for (index1 = 0; index1 < 4; index1++)// runs through index 1 
       for (index2 = 0; index2 < 4; index2++)
        my_array[index1][index2] = index2; // sets value of index 2
        for (index1 = 0; index1 < 4; index1++) // runs through index 1 again
        {
         for (index2 = 0; index2 < 4; index2++) // runs through index 2 
         cout << my_array[index1][index2] << " "; // uses them to set the value of the array
         cout << endl;
        }
    
    //Exit Stage Right!
    return 0;
}
