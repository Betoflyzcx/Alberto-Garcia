/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 01:16 PM
 * Purpose: Find out what each of the stated conditions 
 *          Output
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants


//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    int values[] = {2,6,10,4};
    
    // Outputs 10
    cout << values[2] << "\n";
    // Outputs 6
    cout << ++ values[0] << "\n";
    // Outputs 10
    cout << values[1]++;
    int x = 2;
    // Outputs 4
    cout << values[++x];
    
    //Exit Stage Right!
    return 0;
}
