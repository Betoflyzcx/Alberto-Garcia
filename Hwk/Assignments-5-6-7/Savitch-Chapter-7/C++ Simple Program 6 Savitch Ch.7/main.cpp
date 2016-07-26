/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 01:03 PM
 * Purpose: Write a code that will fill the array 
 *          a[4][5] with User Input
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
    int a[4][5];
    
    for(int i=0; i<5;i++)
    {
        for(int i =0; i < 6;i++)
        {
            cout << "\n Fill in the Array" << endl;
            cin >> a[i][i];
        }
    }
    
    //Exit Stage Right!
    return 0;
}
