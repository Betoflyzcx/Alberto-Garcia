/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 3, 2016, 9:00 AM
 * Purpose : Display A List Of Numbers
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <vector> // Includes Vector Library
using namespace std; //Namespace of the System Libraries
//User Libraries



//Global Constants



//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
	vector<int>num1; //Make Vector Of Type int
	num1.push_back(20); //Make New Space For int And Assign It To 20
	num1.push_back(20); //Make New Space For int And Assign It To 20
	num1.push_back(30); //Make New Space For int And Assign It To 30
        
        
	for (int i = 0; i < num1.size(); i++) // Loops Through Vector 
	{
                // Outputs Vector
		cout << i << "  " << num1.at(i)<<endl;
	}
        
        // Erases 1st Number Of Vector
	num1.erase(num1.begin());
        
        
	cout << endl << endl; // Skips 2 Lines

	for (int i = 0; i < num1.size(); i++) // Loops Through Array 2nd Time 
	{
                // Outputs Vector With Deleted 1st number
		cout << i << "  " << num1.at(i) << endl;
	}
        
        // Exit Stage Right!
    return 0;
}

