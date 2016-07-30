/*
* File:   main.cpp
* Author: Alberto Garcia
* Created on July 14, 2016, 1:00 PM
* Purpose : Display A List Of Numbers TIC TAC TOE
*/

//System Libraries
#include "stdafx.h"
#include <iostream> //Input/Output Library
#include <string>
#include <vector>
#include <ctime>
#include <iomanip> // 
#include <fstream>
using namespace std; //Namespace of the System Libraries
 //User Libraries



//Global Constants

 //Function Prototypes
void CheckTurn(int);
void DrawMap(char,char, vector<char>&);
void Gme_Stat(char,char);
void ResetMap(vector<char> &);
bool CheckWin(char,vector<string> &);
string GetWinner(vector<string> &);
bool Ai(char,vector<string> &, char &);
void BestAI(char,vector<string>&,char &);

//Execution Begins Here!
int main(int argc, char** argv) {
	string Data[2][2];
	Data[0][0] = { "P1 Wins: " };
	Data[1][0] = { "P2 Wins: " };
	int p1_wins=0, p2_wins=0, AI_wins=0;
	int input = 0;
	int timesPlayed = 0;
	bool Used[9];
	char type;
	string Oppnnt;
	char Diffclty;
	char L_input;
	short turn = 1;
	bool Chk = false;
	vector<char> Map(9);//Map for drawing tic tac toe
	vector<string> map(9);// a temperarely stored map used for conversion of char to string
	ResetMap(Map);

	//Fstream Loading
	ifstream inFile;
	inFile.open("Data.txt");
	if (inFile.fail()) { cerr << "Error: Finding file" << endl; }
	inFile >> timesPlayed;
	inFile.close();
	timesPlayed++;

	//Fstream Saving
	ofstream outFile;
	outFile.open("Data.txt");
	if (outFile.fail()) { cerr << "Error: Finding file" << endl; }
	outFile << timesPlayed;
	outFile.close();

	//Ask whether they would like to play with an ai or an player.
	cout << "Enter whether you wish to play against an AI or another PLAYER";
	cout << "Enter:\t 1 For Player \t Enter:\t For AI ";
	cin >> Oppnnt;//Read their input
	while (Chk == false)
	{
		if (Oppnnt != "2")
		{
			if (Oppnnt != "1")
			{
				cout << "Try Again Enter:\t 1 For Player \t Enter:\t 2 For AI "; // Keeps looping until Valid is entered!
				cin >> Oppnnt;
			}
		}
		if (Oppnnt == "1" || Oppnnt == "2")
		{
			Chk = true;//Oppnent is assigned
		}
	}
	if (Oppnnt == "2")//Do they want to face an Ai? If so check me.
	{
		bool Chk_D = false;
		//ask for what difficulty they desire
		cout << "Enter the Difficulty you wish to face: \t Enter 1 for easy \t Enter 2 for Intermediate \n \t";
		cout << "Enter 3 for impossible (Warning Impossible cannot be beaten)";
		cin >> Diffclty;//Read their input

		while (Chk_D == false)
		{
			if (Diffclty != '3')
			{
				if (Diffclty != '2')
				{
					if (Diffclty != '1') // Keeps looping until Valid is entered!
						cin >> Oppnnt;
					cout << "Try Again Enter:\t 1 For easy \t Enter:\t 2 For intermediate \t Enter:\t 3 for impossible ";
				}
			}
			if (Diffclty == '1' || Diffclty == '2' || Diffclty == '3')//Is difficulty assigned
			{
				Chk_D = true;
			}
		}
	}
	while (true)
	{
		switch (turn)
		{
		case 1: // Player 1's Turn
			type = 'O';
			cout << "It's Player 1's Turn \n\n\n";
			cout << "Choose a location: \n\t 1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t";
			cin >> L_input;//Read position choosen

			//if a number is not typed ask to do so
			while (isdigit(L_input) == false)
			{
				cout << "Enter a valid number 1-9";
				cin >> L_input;
			}


			while (Used[L_input] == true) // Checks if someone has already used the point
			{
				cout << "It appears someone has already chosen that spot..\t choose another spot\t";
				cout << "\n\t1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t:";
				cin >> L_input;
			}
			if (Used[L_input] == false) // If the point isn't used.... marks it used
			{
				Used[L_input] = true;
			}
			DrawMap(type, L_input, Map);//Draw the map

			map.clear();//empty map
			map.resize(9);//resize map to 0
			for (int i = 0; i < 9; i++)//loop the map length
			{
				map[i].push_back(Map[i]);//set the string map equal to the char map 
			}
			if (GetWinner(map) != "None")//There is a winner
			{
				cout << endl << GetWinner(map) << " Wins!" << endl;//Write the winner to screen
				if (GetWinner(map) == "Player 1") p1_wins++;  Data[0][1] = to_string(p1_wins);//Write player 1's wins in this round
				if (GetWinner(map) == "Player 2") p2_wins++;  Data[1][1] = to_string(p2_wins);//Write Player 2's wins in this round
				for (int i = 0; i < 2; i++)
				{
					for (int j = 0; j < 2; j++)
					{
						cout << setw(15) << Data[i][j];
					}
					cout << endl;
				}
			}

		case 2: //  Player 2
			if (Oppnnt == "1") // checks if the user is facing another player
			{
				type = 'X';
				cout << "It's Player 2's Turn \n\n\n";
				cout << "Choose a location: \n\t 1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t";
				cin >> L_input;//Read position choosen

				//if the spot is choosen already prompt him to choose another one.
				while (isdigit(L_input) == false)
				{
					cout << "Enter a valid number 1-9";
					cin >> L_input;
				}


				while (Used[L_input] == true) // Checks if someone has already used the point
				{
					cout << "It appears someone has already chosen that spot..\t choose another spot\t";
					cout << "1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t:";
					cin >> L_input;
				}
				if (Used[L_input] == false) // If the point isn't used.... marks it used
				{
					Used[L_input] = true;
				}
				DrawMap(type, L_input, Map);//Draw the map

			}
			if (Oppnnt == "2")//Second player
			{
				short Dif = Diffclty - '0';
				srand(time(0));
				switch (Dif)
				{

				case 1:
					cout << endl << "Its player 2's turn" << endl;//its player 2' turn
					input = L_input - '0';//convert to int
					//spot isn't choosen already
					while (Map[input - 1] == 'O')
					{
						//choose the spot
						int rnd = (rand() % 8 + 1); L_input = '0' + rnd;//input used for Map[number]
					}
					type = 'X';//the current character
					DrawMap(type, L_input, Map);//Draw the map
					break;

				case 2:
					cout << endl << "Its player 2's turn" << endl;//its player 2' turn
					input = L_input - '0';//convert to int
					//if spot isn't choosen already
					while (Map[input -1] == 'O')
					{
						//choose the spot
						int rnd = (rand() % 8 + 1); L_input = '0' + rnd; input = L_input - '0';//input used for Map[number]
					}
					//if player has 2 in a row block him
					if (Ai('O', map, L_input))
					{
						Ai('O', map, L_input);
					}
					type = 'X';//The current character
					DrawMap(type, L_input, Map);//Draw the map
					break;

				case 3:
					cout << endl<<"Its player 2's turn"<<endl;//its player 2' turn
					BestAI('O', map, L_input);//what is the best move?

					//if player has 2 in a row block him
					if (Ai('O', map, L_input))
					{
						Ai('O', map, L_input);
					}
					type = 'X';
					DrawMap(type, L_input, Map);//Draw the map
					break;
				}
			}
		}
		map.clear();//empty map
		map.resize(9);//resize map to 0
		for (int i = 0; i < 9; i++)//loop the map length
		{
			map[i].push_back(Map[i]);//set the string map equal to the char map 
		}
		if (GetWinner(map) != "None")//There is a winner
		{
			cout << endl << GetWinner(map) << " Wins!" << endl;//Write the winner to screen
			if (GetWinner(map) == "Player 1") p1_wins++;  Data[0][1] = to_string(p1_wins);//Write player 1's wins in this round
			if (GetWinner(map) == "Player 2") p2_wins++;  Data[1][1] = to_string(p2_wins);//Write Player 2's wins in this round
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << setw(15) << Data[i][j];
				}
				cout << endl;
			}
		}

	}

	//Exit Stage Right!
	return 0;
}
void DrawMap(char p_char, char Input, vector<char> &Map)//Requires a return of player character and the position he wants to place it
{
	int uInput = Input - '0'; uInput -= 1;//Convert char to int

	for (int i = 0; i < Map.size(); i++)
	{
		if (i % 3 == 0 && i != 0) { cout << endl; }//Add line skips when at 3

		Map[uInput] = p_char;//assign the player character(x or o) to the map
		cout << Map[i] << " ";//Draw the whole Map
	}
	cout << endl;

}
void CheckTurn(int turn)
{
	cout << "Player " << turn << "'s turn" << endl; //write the current players turn
}

void ResetMap(vector<char> &Map)
{
	for (int i = 0; i < Map.size(); i++)//Reset the map to empty spaces
	{
		Map[i] = '+';
	}
}
bool CheckWin(char player, vector<string> &map)//Checks for a winner
{
	string Win = "";//The winner is stored here
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
string GetWinner(vector<string> &map)//Grab a winner and return string 
{
	if (CheckWin('O', map)) { return "Player 1"; }//if a winner is O return player 1
	if (CheckWin('X', map)) { return "Player 2"; }//if winner is X return player 2
	else return "None";//if there is no winner return none
}
bool Ai(char Opchar, vector<string> &map,char &Input)
{
	string Ochar = "";
	Ochar.push_back(Opchar); Ochar.push_back(Opchar);
		if (map[0] + map[1] == Ochar && map[2] + map[2] != "XX"){Input = '3'; cout << "Input = " << Input << endl; return true;} //Row 1
		if (map[1] + map[2] == Ochar && map[0] + map[0] != "XX"){Input = '1'; return true;}	
		if (map[3] + map[4] == Ochar && map[5] + map[5] != "XX"){Input = '6'; return true;} //Row 2
		if (map[4] + map[5] == Ochar && map[3] + map[3] != "XX"){Input = '4'; return true;}	
		if (map[6] + map[7] == Ochar && map[8] + map[8] != "XX"){Input = '9'; return true;} //Row 3
		if (map[7] + map[8] == Ochar && map[6] + map[6] != "XX"){Input = '7'; return true;}	
		if (map[0] + map[3] == Ochar && map[6] + map[6] != "XX"){Input = '7'; return true;} //Column 1
		if (map[3] + map[6] == Ochar && map[0] + map[0] != "XX"){Input = '1'; return true;}	
		if (map[1] + map[4] == Ochar && map[7] + map[7] != "XX"){Input = '8'; return true;} //Colomn 2
		if (map[4] + map[7] == Ochar && map[1] + map[1] != "XX"){Input = '2'; return true;}	
		if (map[2] + map[5] == Ochar && map[8] + map[8] != "XX"){Input = '9'; return true;} //Column 3
		if (map[5] + map[8] == Ochar && map[1] + map[1] != "XX"){Input = '3'; return true;}	
		if (map[0] + map[4] == Ochar && map[8] + map[8] != "XX"){Input = '9'; return true;} //Diagnol 1	
		if (map[4] + map[8] == Ochar && map[0] + map[0] != "XX"){Input = '1'; return true;}	
		if (map[2] + map[4] == Ochar && map[6] + map[6] != "XX"){Input = '7'; return true;} //Diagnol 2
		if (map[4] + map[6] == Ochar && map[2] + map[2] != "XX"){Input = '3'; return true;}	
}
void BestAI(char Opchar, vector<string> &map, char &Input)
{
	string Ochar = "";
	Ochar.push_back(Opchar);
	if (map[4] != "X" && map[4] != "O") { Input = '5'; }
	if (map[4] != "X")
	{
		if (map[0] == Ochar) { Input = '5'; } if (map[2] == Ochar) { Input = '5'; }
		if (map[6] == Ochar) { Input = '5'; } if (map[8] == Ochar) { Input = '5'; }
	}
	if (map[3] == Ochar) { Input = '1'; } if (map[5] == Ochar) { Input = '3'; }
	if (map[4] == Ochar) { Input = '1'; }
	int _input = Input -'0';
    if (Input == '3' || Input == '9') {Input = '0' +( _input - 1);}
	if (Input == '7' || Input == '1') { Input = '0' + (_input + 1);if(map[_input] != "+")Input = '0' + _input; }
	if (Input == '1' || Input == '3') { Input = '0' + (_input + 3); }
	if (Input == '7' || Input == '9') { Input = '0' + (_input - 3); } cout << "input = " << Input << endl;
}
