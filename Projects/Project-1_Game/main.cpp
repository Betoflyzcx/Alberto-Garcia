
/*
* File:   main.cpp
* Author: Alberto Garcia
* Created on July 14, 2016, 1:00 PM
* Purpose : Display A List Of Numbers TIC TAC TOE
*/

//System Libraries
#include <iostream> //Input/Output Library
#include <string> // Includes String Library
#include <vector> // Includes Vector
using namespace std; //Namespace of the System Libraries
					 //User Libraries



 //Global Constants


 //Function Prototypes

void DrawMap(char p_char, char Input, vector<char> &Map, int &MapSize);
void ResetMap(vector<char> &Map, int &MapSize);
bool CheckWin(char player, vector<char> &Map);
string GetWinner(vector<char> &Map);

//Execution Begins Here!
int main(int argc, char** argv) {
	bool Used[10]={};//What spot has been choose already
	char type;//The current player character
	char L_input;//the place the player chooses
	short turn = 1;//whoose turn it is
	int MapSize = 9;//Map y coordinate
        int L_cInput;//used for converting L_input to  int
	vector<char> Map(MapSize);//Map for drawing tic tac toe
	ResetMap(Map, MapSize);//Reset map

	while (true)//loop forever
	{
		switch (turn)//check for turn
		{
		case 1: // Player 1's Turn
			type = 'O';//player 1 is a O
			cout << "It's Player 1's Turn \n\n\n";
			cout << "Choose a location: \n \t 1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t";
			cin >> L_input;//where does the player want to go?
                        L_cInput = L_input - '0';//covert it to int
			while (isdigit(L_input) == false)//is a digit?
			{
				cout << "Enter a valid number 1-9";
				cin >> L_input;//where does player want to go?
                                L_cInput = L_input - '0';//convert it to int
			}

			while (Used[L_cInput] == true) // Checks if someone has already used the point
			{
				cout << "It appears someone has already chosen that spot..\t choose another spot\n";
				cout << "\t 1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t:";
				cin >> L_input;//where does player want to go
                                L_cInput =L_input -'0';//convert to int
			}
			if (Used[L_cInput] == false) // If the point isn't used.... marks it used
			{
				Used[L_cInput] = true;
			}
			DrawMap(type, L_input, Map, MapSize);//Draw the map
                        
                        if (GetWinner(Map) != "None")//There is a winner
		         {
                            cout << string(50, '\n');
                            DrawMap(type, L_input, Map, MapSize);
			  cout << endl << GetWinner(Map) << " Wins!" << endl;//Write the winner to screen
                          
		         }
                        turn++;//Go to player 2's turn
                        
                case 2: //Player 2's Turn
                    type = 'X';//player 2 is X
			cout << "It's Player 2's Turn \n\n\n";
			cout << "Choose a location: \n \t 1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t";
			cin >> L_input;//where does player want to go?
                        L_cInput = L_input - '0';//convert to int
                        
			while (isdigit(L_input) == false)//is it a digit?
			{
				cout << "Enter a valid number 1-9";
				cin >> L_input;//where does player want to go?
                                L_cInput = L_input - '0';//covert to int
			}
			while (Used[L_cInput] == true) // Checks if someone has already used the point
			{
				cout << "It appears someone has already chosen that spot..\t choose another spot\t";
				cout << "1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t:";
				cin >> L_input;//where does player want to go?
                                L_cInput = L_input - '0';//convert to int
			}
			if (Used[L_cInput] == false) // If the point isn't used.... marks it used
			{
				Used[L_cInput] = true;
			}
			DrawMap(type, L_input, Map, MapSize);//Draw the map
                        
                        if (GetWinner(Map) != "None")//There is a winner
		         {
                            cout << string(50, '\n');
                            DrawMap(type, L_input, Map, MapSize);
			  cout << endl << GetWinner(Map) << " Wins!" << endl;//Write the winner to screen
                          
		         }
                        turn--;//Go to player 1's turn
          }



		
		
	}

	//Exit Stage Right!
	return 0;
}
void DrawMap(char p_char, char Input, vector<char> &Map, int &MapSize)//Requires a return of player character and the position he wants to place it
{
	int uInput = Input - '0'; uInput -= 1;//Convert char to int

	for (int i = 0; i < MapSize; i++)
	{
		if (i % 3 == 0 && i != 0) { cout << endl; }//Add line skips when at 3

		Map[uInput] = p_char;//assign the player character(x or o) to the map
		cout << Map[i] << " ";//Draw the whole Map
	}
	cout << endl;//Skip a line

}
void CheckTurn(int turn)
{
	cout << "Player " << turn << "'s turn" << endl; //write the current players turn
}

void ResetMap(vector<char> &Map, int &MapSize)
{
	for (int i = 0; i < MapSize; i++)//Reset the map to empty spaces
	{
		Map[i] = '*';//Fill in map
	}
}
bool CheckWin(char player, vector<char> &Map)//Checks for a winner
{
	string Win = "";//The winner is stored here
	vector<string> map(9);//a temperarely stored map used for conversion of char to string
	for (int i = 0; i < 9; i++)//loop the map length
	{
		map[i].push_back(Map[i]);//set the string map equal to the char map 
	}
	Win.push_back(player); Win.push_back(player); Win.push_back(player);//Add 3 chars of itself so that it can compare to 3 places at once
	return ((map[0] + map[1] + map[2] == Win)	//Row 1
		|| (map[3] + map[4] + map[5] == Win)	//Row 2
		|| (map[6] + map[7] + map[8] == Win)	//Row 3
		|| (map[0] + map[3] + map[6] == Win)	//Column 1
		|| (map[1] + map[4] + map[7] == Win)	//Colomn 2
		|| (map[2] + map[5] + map[8] == Win)	//Column 3
		|| (map[0] + map[4] + map[8] == Win)	//Diagnol 1
		|| (map[2] + map[4] + map[6] == Win));	//Diagnol 2
}
string GetWinner(vector<char> &Map)//Grab a winner and return string 
{
	if (CheckWin('O', Map)) return "Player 1";//if a winner is x return player 1
	if (CheckWin('X', Map)) return "Player 2";//if winner is o return player 2
	else return "None";//if there is no winner return non
}
