#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <iomanip>
using namespace std;

                                                                                                           // MAX 
class figuri							                                                                   // MAX
{										                                                                   // MAX
public:									                                                                   // MAX
	int number_f;						                                                                   // MAX
	char forma_f[4][4];					                                                                   // MAX
										                                                                   // MAX
};										                                                                   // MAX
																										   // MAX
void arena_tetris(char arena_mass[20][12]) // sama arena												   // MAX
{																										   // MAX
	for (int i = 0; i < 20; i++) // zapovnennya areni '0', dlya kodu treba								   // MAX
	{																									   // MAX
		for (int j = 0; j < 12; j++)																	   // MAX
		{																								   // MAX
			arena_mass[i][j] = '0';																		   // MAX
		}																								   // MAX
	}																									   // MAX
}																										   // MAX
																										   // MAX
void show_arena_tetris(char arena_mass[20][12]) // vivod areni											   // MAX
{																										   // MAX
	for (int i = 0; i < 20; i++)																		   // MAX
	{																									   // MAX
		for (int j = 0; j < 12; j++)																	   // MAX
		{																								   // MAX
			cout << " ";																				   // MAX
			cout << arena_mass[i][j];																	   // MAX
		}																								   // MAX
		Sleep(15);																						   // MAX
		cout << endl;																					   // MAX
	}																									   // MAX
}																										   // MAX
																										   // MAX
void figuri_s_arena_tetris(char arena_mass[20][12], figuri kvadrat) // robota z arenoy					   // MAX
{																										   // MAX
	show_arena_tetris(arena_mass);																		   // MAX
																										   // MAX
	for (int i = 0; i < 4; i++)																			   // MAX
	{																									   // MAX
		for (int j = 0; j < 4; j++)																		   // MAX
		{																								   // MAX
			arena_mass[i][j] = kvadrat.forma_f[i][j];													   // MAX
		}																								   // MAX
	}																									   // MAX
	Sleep(20);																							   // MAX
	system("cls");																						   // MAX
																										   // MAX
}

void palka_fall(char arena_mass[20][12]) {																   // NAZAR
	int h = 0;																							   // NAZAR
	for (int i = 0; i < 20; i++)																		   // NAZAR
	{																									   // NAZAR
		for (int i = 0; i < 20; i++)																	   // NAZAR
		{																								   // NAZAR
			for (int j = 0; j < 12; j++)																   // NAZAR
			{																							   // NAZAR
				cout << " ";																			   // NAZAR
																										   // NAZAR
				cout << arena_mass[i][j];																   // NAZAR
			}																							   // NAZAR
			cout << endl;																				   // NAZAR
		}																								   // NAZAR
		arena_mass[h][0] = '*';																			   // NAZAR
		arena_mass[h - 4][0] = '0';																		   // NAZAR
		Sleep(40);																						   // NAZAR
		h++;																							   // NAZAR
		system("cls");																					   // NAZAR
	}																									   // NAZAR
	for (int i = 0; i < 20; i++)																		   // NAZAR
	{																									   // NAZAR
		for (int j = 0; j < 12; j++)																	   // NAZAR
		{																								   // NAZAR
			cout << " ";																				   // NAZAR
																										   // NAZAR
			cout << arena_mass[i][j];																	   // NAZAR
		}																								   // NAZAR
		cout << endl;																					   // NAZAR
	}																									   // NAZAR
	_getch();																							   // NAZAR
}																										   // NAZAR
																										   // NAZAR
void kybik_fall(char arena_mass[20][12]) {																   // NAZAR
	int h = 0;																							   // NAZAR
	for (int i = 0; i < 20; i++)																		   // NAZAR
	{																									   // NAZAR
		for (int i = 0; i < 20; i++)																	   // NAZAR
		{																								   // NAZAR
			for (int j = 0; j < 12; j++)																   // NAZAR
			{																							   // NAZAR
				cout << " ";																			   // NAZAR
																										   // NAZAR
				cout << arena_mass[i][j];																   // NAZAR
			}																							   // NAZAR
			cout << endl;																				   // NAZAR
		}																								   // NAZAR
		arena_mass[h][0] = '*';																			   // NAZAR
		arena_mass[h][1] = '*';																			   // NAZAR
		arena_mass[h - 2][0] = '0';																		   // NAZAR
		arena_mass[h - 2][1] = '0';																		   // NAZAR
		Sleep(40);																						   // NAZAR
		h++;																							   // NAZAR
		system("cls");																					   // NAZAR
	}																									   // NAZAR
	for (int i = 0; i < 20; i++)																		   // NAZAR
	{																									   // NAZAR
		for (int j = 0; j < 12; j++)																	   // NAZAR
		{																								   // NAZAR
			cout << " ";																				   // NAZAR
																										   // NAZAR
			cout << arena_mass[i][j];																	   // NAZAR
		}																								   // NAZAR
		cout << endl;																					   // NAZAR
	}																									   // NAZAR
	_getch();																							   // NAZAR
}																										   // NAZAR
																										   // NAZAR
void geska_fall(char arena_mass[20][12]) {																   // NAZAR
	int h = 0;																							   // NAZAR
	for (int i = 0; i < 20; i++)																		   // NAZAR
	{																									   // NAZAR
		for (int i = 0; i < 20; i++)																	   // NAZAR
		{																								   // NAZAR
			for (int j = 0; j < 12; j++)																   // NAZAR
			{																							   // NAZAR
				cout << " ";																			   // NAZAR
																										   // NAZAR
				cout << arena_mass[i][j];																   // NAZAR
			}																							   // NAZAR
			cout << endl;																				   // NAZAR
		}																								   // NAZAR
		arena_mass[h][0] = '*';																			   // NAZAR
		arena_mass[h][1] = '*';																			   // NAZAR
		arena_mass[h - 3][0] = '0';																		   // NAZAR
		arena_mass[h - 3][1] = '0';																		   // NAZAR
		arena_mass[h - 2][0] = '0';																		   // NAZAR
		arena_mass[h - 1][0] = '0';																		   // NAZAR
		Sleep(40);																						   // NAZAR
		h++;																							   // NAZAR
		system("cls");																					   // NAZAR
	}																									   // NAZAR
	for (int i = 0; i < 20; i++)																		   // NAZAR
	{																									   // NAZAR
		for (int j = 0; j < 12; j++)																	   // NAZAR
		{																								   // NAZAR
			cout << " ";																				   // NAZAR
																										   // NAZAR
			cout << arena_mass[i][j];																	   // NAZAR
		}																								   // NAZAR
		cout << endl;																					   // NAZAR
	}																									   // NAZAR
	_getch();																							   // NAZAR
}																										   // NAZAR
																										   // NAZAR
void piramidka_fall(char arena_mass[20][12]) {															   // NAZAR
	int h = 0;																							   // NAZAR
	for (int i = 0; i < 20; i++)																		   // NAZAR
	{																									   // NAZAR
		for (int i = 0; i < 20; i++)																	   // NAZAR
		{																								   // NAZAR
			for (int j = 0; j < 12; j++)																   // NAZAR
			{																							   // NAZAR
				cout << " ";																			   // NAZAR
																										   // NAZAR
				cout << arena_mass[i][j];																   // NAZAR
			}																							   // NAZAR
			cout << endl;																				   // NAZAR
		}																								   // NAZAR
		arena_mass[h][0] = '*';																			   // NAZAR
		arena_mass[h][1] = '*';																			   // NAZAR
		arena_mass[h][2] = '*';																			   // NAZAR
		arena_mass[h - 1][0] = '0';																		   // NAZAR
		arena_mass[h - 2][1] = '0';																		   // NAZAR
		arena_mass[h - 1][2] = '0';																		   // NAZAR
		Sleep(40);																						   // NAZAR
		h++;																							   // NAZAR
		system("cls");																					   // NAZAR
	}																									   // NAZAR
	for (int i = 0; i < 20; i++)																		   // NAZAR
	{																									   // NAZAR
		for (int j = 0; j < 12; j++)																	   // NAZAR
		{																								   // NAZAR
			cout << " ";																				   // NAZAR
																										   // NAZAR
			cout << arena_mass[i][j];																	   // NAZAR
		}																								   // NAZAR
		cout << endl;																					   // NAZAR
	}																									   // NAZAR
	_getch();																							   // NAZAR
}																										   // NAZAR

void create_f()																							   // MAX
{																										   // MAX
	//Figuri vsi																						   // MAX
																										   // MAX
	// KVADRAT = (number 1)																				   // MAX
	figuri kvadrat;																						   // MAX
	kvadrat.number_f = 1; // dlya vizova figuri na pole													   // MAX
	for (int i = 0; i < 2; i++)																			   // MAX
	{																									   // MAX
		for (int j = 0; j < 2; j++)																		   // MAX
		{																								   // MAX
			kvadrat.forma_f[i][j] = '*';																   // MAX
		}																								   // MAX
	}																									   // MAX
																										   // MAX
	// PALKA NA 4 (number 2)																			   // MAX
	figuri palka;																						   // MAX
	palka.number_f = 2; // dlya vizova figuri na pole													   // MAX
	for (int i = 0; i < 4; i++)																			   // MAX
	{																									   // MAX
		for (int j = 0; j < 1; j++)																		   // MAX
		{																								   // MAX
			kvadrat.forma_f[i][j] = '*';																   // MAX
		}																								   // MAX
	}																									   // MAX
																										   // MAX
	// NOZKA (number 3)																					   // MAX
	figuri NOZHKA;																						   // MAX
	NOZHKA.number_f = 3; // dlya vizova figuri na pole													   // MAX
	NOZHKA.forma_f[0][1] = '*';																			   // MAX
	for (int i = 0; i < 3; i++)																			   // MAX
	{																									   // MAX
		for (int j = 0; j < 1; j++)																		   // MAX
		{																								   // MAX
			NOZHKA.forma_f[i][j] = '*';																	   // MAX
																										   // MAX
																										   // MAX
		}																								   // MAX
	}																									   // MAX
																										   // MAX
}																										   // MAX
																										   // MAX
int main(figuri NOZHKA, figuri kvadrat)																	   // MAX
{																										   // MAX
	char arena_mass[20][12]; // massiv dlya vzaemodii i pobuduvannya areni								   // MAX
	arena_tetris(arena_mass);																			   // MAX
	create_f();																							   // MAX
	for (int i = 0; i < 2; i++)																			   // MAX
	{																									   // MAX
		for (int j = 0; j < 2; j++)																		   // MAX
		{																								   // MAX
			cout << kvadrat.forma_f[0][0];																   // MAX
		}																								   // MAX
		cout << endl;																					   // MAX
	}																									   // MAX
	show_arena_tetris(arena_mass);																		   // MAX
	_getch();																							   // MAX
	system("cls");																						   // MAX
	int c = -3;																							   // MAX
	//kybik_fall 
																										   // NAZAR
	piramidka_fall(arena_mass);																			   // NAZAR
	_getch();																							   // NAZAR
	system("cls");																						   // NAZAR
	geska_fall(arena_mass);																				   // NAZAR
	_getch();																							   // NAZAR
	system("cls");																						   // NAZAR
	kybik_fall(arena_mass);																				   // NAZAR
	_getch();																							   // NAZAR
	system("cls");																						   // NAZAR
	palka_fall(arena_mass);																				   // NAZAR
	_getch();																							   // NAZAR
	system("cls");																						   // NAZAR
																										   // NAZAR
	return 0;
}