#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <iomanip>
using namespace std;

// MAX 
class figuri							                                                                
{										                                                                
public:									                                                                
	int number_f;						                                                                
	char forma_f[4][4];					                                                                
																										
};
//NAZARS CHANGES !!!! DONT DELETE THIS:-))))
//very important pease of code
																										
void arena_tetris(char arena_mass[20][12]) // sama arena												
{																										
	for (int i = 0; i < 20; i++) // zapovnennya areni '0', dlya kodu treba								
	{																									
		for (int j = 0; j < 12; j++)																	
		{																								
			arena_mass[i][j] = '0';																		
		}																								
	}																									
}																										
																										
void show_arena_tetris(char arena_mass[20][12], int score) // vivod areni											
{																										
	for (int i = 0; i < 20; i++)																		
	{																									
		for (int j = 0; j < 12; j++)																	
		{																								
			cout << " ";																				
			cout << arena_mass[i][j];																	
		}																																										   // MAX
		cout << endl;																					
	}		
	cout << "\n" << endl;
	cout << "__________________________________________" << endl;
	cout << "\n" << endl;
	cout << "Score: " << score << endl;
}																										
																										

void palka_fall(char arena_mass[20][12], int score) {
	int h = 0;			
		for (int i = 0; i < 20; i++)
		{
			if ((arena_mass[h][0] == '0') && (arena_mass[h][0] != '1'))
			{
			show_arena_tetris(arena_mass, score);
			arena_mass[h][0] = '1';
			arena_mass[h - 4][0] = '0';
			Sleep(1);
			h++;
			system("cls");
		    }
	    }
	show_arena_tetris(arena_mass, score);
}																										
																										
void kybik_fall(char arena_mass[20][12], int score)
{																
	int h = 0;																							
	for (int i = 0; i < 20; i++)																		
	{	
		if ((arena_mass[h][0] != '1') && (arena_mass[h][1] != '1'))
		{
			show_arena_tetris(arena_mass, score);
			arena_mass[h][0] = '1';
			arena_mass[h][1] = '1';
			arena_mass[h - 2][0] = '0';
			arena_mass[h - 2][1] = '0';
			Sleep(20);
			h++;
			system("cls");
		}
	}																									
	show_arena_tetris(arena_mass, score);
}																										 
																										 
void geska_fall(char arena_mass[20][12], int score)
{																 
	int h = 0;																							 
	for (int i = 0; i < 20; i++)																		 
	{		
		if ((arena_mass[h][0] == '0') && (arena_mass[h][1] == '0'))
		{
			show_arena_tetris(arena_mass, score);
			arena_mass[h][0] = '1';
			arena_mass[h][1] = '1';
			arena_mass[h - 3][0] = '0';
			arena_mass[h - 3][1] = '0';
			arena_mass[h - 2][0] = '0';
			arena_mass[h - 1][0] = '0';
			Sleep(20);
			h++;
			system("cls");
		}
	}																									 
	show_arena_tetris(arena_mass, score);
}																										 
																										 
void piramidka_fall(char arena_mass[20][12], int score) 
{															 
	int h = 0;																							 
	for (int i = 0; i < 20; i++)																		 
	{					
		if ((arena_mass[h][0] == '0') && (arena_mass[h][1] == '0') && (arena_mass[h][2] == '0' ))
		{
			show_arena_tetris(arena_mass, score);
			arena_mass[h][0] = '1';
			arena_mass[h][1] = '1';
			arena_mass[h][2] = '1';
			arena_mass[h - 1][0] = '0';
			arena_mass[h - 2][1] = '0';
			arena_mass[h - 1][2] = '0';
			Sleep(20);
			h++;
			system("cls");
		}
	}																									 
	show_arena_tetris(arena_mass, score);
}


void win_stirannya(char arena_mass[20][12], int score)
{
	for (int i = 0; i <= 20; i++)
	{
		int perevirk = 0; // skilki zirok v radu
		for (int j = 0; j <= 12; j++)
		{
			if (arena_mass[i][j] == '1')
			{
				perevirk++;
			}
			if (perevirk == 12)
			{
				cout << endl;
				cout << endl;
				cout << "+100 score" << endl;
				score += 100;
				for (int k = i; k <= 20 - i; k++)
				{
					for (int u = 0; u <= 12; u++)
					{
						arena_mass[k][u] = '0';
					}
				}
			}
		}
	}
}


void padannya_random(char arena_mass[20][12], int score)
{
	int n = 4;
	while (_kbhit() != ('a'))
	{
		n = rand() % 5 + 0;
		if (n == 1)
		{
			Sleep(10);
			system("cls");
			piramidka_fall(arena_mass, score); // piramidka
			win_stirannya(arena_mass, score);
		}
		else if (n == 2)
		{
			Sleep(10);
			system("cls");
			geska_fall(arena_mass, score); // geska
			win_stirannya(arena_mass, score);
		}
		else if (n == 3)
		{
			Sleep(10);
			system("cls");
			kybik_fall(arena_mass, score); // kubik
			win_stirannya(arena_mass, score);
		}
		if (n == 4)
		{
			Sleep(10);
			system("cls");
			palka_fall(arena_mass, score);
			win_stirannya(arena_mass, score);
		}
		else
		{
		}
	}

}

void menu(char arena_mass[20][12], int score)
{
	int menuu = 0;
	cout << " TETRISTETRISTETRIS   TETRISTETRIS  TETRISTETRISTETRIS   TETRISTETRIS        TETRIS     TETRISTETRIS  " << endl;
	cout << " TETRISTETRISTETRIS   TETRISTETRIS  TETRISTETRISTETRIS   TETRIS    TETRIS    TETRIS    TETRISTETRIS   " << endl;
	cout << "       TETRIS         TETRIS              TETRIS         TETRIS    TETRIS               TETRIS        " << endl;
	cout << "       TETRIS         TETRISTETRIS        TETRIS         TETRISTETRIS        TETRIS        TETRIS    " << endl;
	cout << "       TETRIS         TETRISTETRIS        TETRIS         TETRISTETRIS        TETRIS          TETRIS  " << endl;
	cout << "       TETRIS         TETRIS              TETRIS         TETRIS    TETRIS    TETRIS        TETRIS    " << endl;
	cout << "       TETRIS         TETRISTETRIS        TETRIS         TETRIS     TETRIS   TETRIS    TETRISTETRIS  " << endl;
	cout << "       TETRIS         TETRISTETRIS        TETRIS         TETRIS     TETRIS   TETRIS  TETRISTETRIS   " << endl;
	cout << "                       " << endl;
	cout << "____________________________________________________________________________________________________" << endl;
	cout << "1. Play Game   |" << endl;
	cout << "2. Score       |" << endl;
	cout << "_______________|" << endl;
	cout << "               |" << endl;
	cin >> menuu;

	if (menuu == 1)
	{
		system("cls");
		cout << "Tap random key" << endl;
		_getch();
		padannya_random(arena_mass, score);
	}
	else if (menuu == 2)
	{
		system("cls");
		cout << "TOP SCORE PLAYER" << endl;
		if (_getch())
		{
			system("cls");
			menu(arena_mass, score);
		}
	}
	else
	{
		system("cls");
		menu(arena_mass, score);
	}
}

void create_f()																							  
{																										  
	//Figuri vsi																						  
																										  
	// KVADRAT = (number 1)																				  
	figuri kvadrat;																						  
	kvadrat.number_f = 1; // dlya vizova figuri na pole													  
	for (int i = 0; i < 2; i++)																			  
	{																									  
		for (int j = 0; j < 2; j++)																		  
		{																								  
			kvadrat.forma_f[i][j] = '1';																  
		}																								  
	}																									  
																										  
	// PALKA NA 4 (number 2)																			  
	figuri palka;																						  
	palka.number_f = 2; // dlya vizova figuri na pole													  
	for (int i = 0; i < 4; i++)																			  
	{																									  
		for (int j = 0; j < 1; j++)																		  
		{																								  
			kvadrat.forma_f[i][j] = '1';																  
		}																								  
	}																									  
																										  
	// NOZKA (number 3)																					  
	figuri NOZHKA;																						  
	NOZHKA.number_f = 3; // dlya vizova figuri na pole													  
	NOZHKA.forma_f[0][1] = '1';																			  
	for (int i = 0; i < 3; i++)																			  
	{																									  
		for (int j = 0; j < 1; j++)																		  
		{																								  
			NOZHKA.forma_f[i][j] = '1';																	  
		}																								  
	}																									  
																										  
}																										  
																										  
int main(figuri NOZHKA, figuri kvadrat)																	  
{																										  
	char arena_mass[20][12]; // massiv dlya vzaemodii i pobuduvannya areni								  
	arena_tetris(arena_mass);																			  
	create_f();																							  
	srand(time(0));																						  
	int score = 0;


	menu(arena_mass, score);
	int c = -3;



	return 0;
}