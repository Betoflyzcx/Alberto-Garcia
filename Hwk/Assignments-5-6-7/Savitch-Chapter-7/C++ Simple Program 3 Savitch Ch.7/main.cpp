/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on June 22, 2016, 8:05 PM
 * Purpose: Write a function that tests an array's 
 *          values for being out of order  
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int out_of_order(float (&Array)[10], int size);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float Array[10]{1,2,3,4,5,6,7,8,1,1};
    int size = 9;
    if(out_of_order(Array,size)==-1)
    {
        cout << "\nThey are in order"<<endl;
    }
    else 
    {
        cout << "\nThey are out of order:\n\t"<<endl;
        for(int i =0; i <= size;i++)
        {
            cout << "\n" << Array[i] << endl;
        }
    }
    //Exit Stage Right!
    return 0;
}
int out_of_order(float (&Array)[10],int size)
{
    for (int i=0; i <= size; i++)
    {
        if(Array[i] > Array[i+1])
        {
            return 2;
        }
    }
    return -1;
}