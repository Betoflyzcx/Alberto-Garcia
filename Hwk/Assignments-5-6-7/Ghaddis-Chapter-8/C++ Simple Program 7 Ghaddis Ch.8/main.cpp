/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 25, 2016, 01:32 PM
 * Purpose: Write a structure called destination
 *          with the following members:
 *          city, a string object 
 *          distance, a measurement structure
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <string> // string library
using namespace std; //Namespace of the System Libraries


//User Libraries

struct Destination
{
    string city;
    struct  // struct inside this struct 
    {
        int miles; // variables inside the struct 
        long int meters;
    };
};

//Global Constants


//Function Prototypes



//Execution Begins Here!
int main(int argc, char** argv){
    //Declare Variables
    
    Destination one; // instance of destination
    
    //Input the city and distance
    cout << "Enter the city the destination is in \n";
    cin >> one.city;
    
    cout << "Now Enter the miles \n";
    cin >> one.miles; // Miles away
    
    cout << "Lastly Enter the meters \n";
    cin >> one.meters; // extra meters away
    
    //Output of all data
    cout << "\n\n" << one.city << "is" << one.miles << "and"; 
    cout << one.meters << "away \n"; 
    
    //Exit Stage Right!
    return 0;
}
