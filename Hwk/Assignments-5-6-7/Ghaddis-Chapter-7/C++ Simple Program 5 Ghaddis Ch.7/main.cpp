/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 6:42 AM
 * Purpose: Write a declaration for a structured named account and then 
 *          write a definition for it
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <string> // string library
using namespace std; //Namespace of the System Libraries


//User Libraries



//Global Constants

struct Account
{
    string Acnt_num;
    double Acnt_b;
    double Inter_r;
    double A_M_B;
};
//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    Account Bob;
    Bob.Acnt_num = "ACZ42137";
    Bob.Acnt_b = 4512.59;
    Bob.Inter_r = 0.04;
    Bob.A_M_B = 4217.07;


            

            
    //Exit Stage Right!
    return 0;
}
