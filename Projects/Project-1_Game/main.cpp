

/* 
 * File:   main.cpp
 * Author: Alberto Garcia
 * Created on July 14, 2016, 4:27 PM
 * Purpose: Console Game with NeBeans IDE
 */

 // System Libraries
#include <iostream> // Input/Output Library
#include <string> // Include string Libraries
#include <cmath> // Include Math Libraries

using namespace std; //Namespace of the System Libraries

 //User Libraries



 //Global Constants



 //Function Prototypes
void MapDraw(int x, int y);

void AI();


// Execution Begins Here!
int main(int argc, char** argv) {
	//Decalre variables
	int x;
	int y;
	cin >> x;
	cin >> y;
	short Turn;  // Player 1's && Player2's Turn  
	short P_or_A;
	char OpnP1; // Player 1's Option
	char OpnP2; // Player 2's Option

				//Input Data
	cout << "Enter the Length for the map\\t MAX FOR 'L' AND 'W' IS 20! \n";
	cin >> x;
	cout << "Now Enter the Width for the Map"\n;
	cin >> y;
	cout << "Are You playing against someone or do you wish to play against an 'ai'";
	cout << "\n\n \t Enter 1 For Playing another 'Player' \t Enter 2 For playing an ai";
	cin >> P_or_A;


	cout << "Ready?\t Set \t Go !!\t\n";

	switch (Turn) {
	case1: // Player 1's Turn
		cout << "It's Player 1's Turn";


		Turn += 1; // Go's To player 2's Turn 

		break;

	case2: // Player 2's Turn
		cout << "It's Player 2's Turn";
		switch (P_or_A)
		{

		case 1:

		case 2:

		default:
			cout << "You never entered a valid entry for which you wish to play";
			cout << "'Player' or 'AI' \t";
			cin >> P_or_A

		}

		Turn -= 1; // Go's Back to Player 1's Turn

		break;


	MapDraw(x, y); //Maps Length and Width


	//Exit Stage Right!
    return 0;
}

void MapDraw(int x, int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int i = 0; i <x; i++)
		{

		}
		cout << endl;
	}
}

void AI() {  // The AI LOGIC


}
