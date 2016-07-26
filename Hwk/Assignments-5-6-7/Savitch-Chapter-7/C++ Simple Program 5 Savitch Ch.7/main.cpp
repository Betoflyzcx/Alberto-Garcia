/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 23, 2016, 12:51 PM
 * Purpose: Write a program that will read up to ten 
 *          letters into an array and then Outputs 
 *          the letters backwards
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string> //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string letter_box[10]; // Array of 10 
    
    for (int i =0; i <=10; i++) // loops through array 
    {
        cout << "\nEnter a letter into the array:\n\t: ";
        cin >> letter_box[i]; // Input into all array elements
    }
    cout << "\n\t.\n";
    cout << "\nThese are the letters backwards:\n";
    for (int i =10; i >= 0;i-- ) // loops through the array backwards
    {   // Outputs the array backwards
        cout << "\n\t" << letter_box[i] << endl; 
    }
    
    //Exit Stage Right!
    return 0;
}


