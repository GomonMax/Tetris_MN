#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <iomanip>
using namespace std;
void padannya_random();

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
			if (arena_mass[i][j] == '#')
			{
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 2));
			}
			cout << " ";
			cout << arena_mass[i][j];
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, (WORD)((0<< 4) | 7));
		}																																										   // MAX
		cout << endl;
	}
	cout << "\n" << endl;
	cout << "__________________________________________" << endl;
	cout << "\n" << endl;
	cout << "Score: " << score << endl;
}

void palka_fall(char arena_mass[20][12], int score)
{
	int h = 0;
	int d = 0;

	for (int i = 0; i <= 20; i++)
	{
		if ((arena_mass[h][d] == '0') && (arena_mass[h][d] != '1'))
		{
			if (_kbhit())
			{
				switch (_getch())
				{
				case 'd':
				{
					d++;
					arena_mass[h - 1][d - 1] = '0';
					arena_mass[h - 2][d - 1] = '0';
					arena_mass[h - 3][d - 1] = '0';
					arena_mass[h - 4][d - 1] = '0';
					break;
				}
				case 'a':
				{
					d--;
					arena_mass[h - 1][d + 1] = '0';
					arena_mass[h - 2][d + 1] = '0';
					arena_mass[h - 3][d + 1] = '0';
					arena_mass[h - 4][d + 1] = '0';
					break;
				}
				case 'r':
				{
					int r = 0;
					r++;
					for (int j = 0; i < 20; i++)
					{
						if (!(r % 2) == 0)
						{

							if ((arena_mass[h][d] == '0') && (arena_mass[h][d + 1] == '0') && (arena_mass[h][d + 2] == '0') && (arena_mass[h][d + 3] == '0'))
							{

								if (_kbhit())
								{
									switch (_getch())
									{
									case'r':
									{
										r++;
										break;
									}
									}
								}
								for (int o = 0; o < 1; o++)
								{
									arena_mass[h - 1][d] = '0';
									arena_mass[h - 2][d] = '0';
									arena_mass[h - 3][d] = '0';
									arena_mass[h - 4][d] = '0';
								}
								arena_mass[h][d] = '#';
								arena_mass[h][d + 1] = '#';
								arena_mass[h][d + 2] = '#';
								arena_mass[h][d + 3] = '#';
								arena_mass[h - 1][d] = '0';
								arena_mass[h - 1][d + 1] = '0';
								arena_mass[h - 1][d + 2] = '0';
								arena_mass[h - 1][d + 3] = '0';
								h++;
								show_arena_tetris(arena_mass, score);
								Sleep(250);
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'd':
									{
										d++;
										arena_mass[h - 1][d - 1] = '0';

										break;
									}
									case 'a':
									{
										d--;
										arena_mass[h - 1][d + 4] = '0';
										break;
									}
									}
								}
								system("cls");
							}

						}
						else
						{
							if ((arena_mass[h][d] == '0') && (arena_mass[h][d + 1] == '0') && (arena_mass[h][d + 2] == '0') && (arena_mass[h][d + 3] == '0'))
							{
								show_arena_tetris(arena_mass, score);
								arena_mass[h - 1][d + 1] = '0';
								arena_mass[h - 1][d + 2] = '0';
								arena_mass[h - 1][d + 3] = '0';
								arena_mass[h][d] = '#';
								arena_mass[h - 4][d] = '0';
								Sleep(250);
								h++;
								system("cls");
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'd':
									{
										d++;
										arena_mass[h - 1][d - 1] = '0';
										arena_mass[h - 2][d - 1] = '0';
										arena_mass[h - 3][d - 1] = '0';
										arena_mass[h - 4][d - 1] = '0';
										break;
									}
									case 'a':
									{
										d--;
										arena_mass[h - 1][d + 1] = '0';
										arena_mass[h - 2][d + 1] = '0';
										arena_mass[h - 3][d + 1] = '0';
										arena_mass[h - 4][d + 1] = '0';
										break;
									}
									}
								}
							}
						}
					}


					break;
				}
				}
			}
			show_arena_tetris(arena_mass, score);
			arena_mass[h][d] = '#';
			arena_mass[h - 4][d] = '0';
			Sleep(250);
			h++;
			system("cls");
		}
	}
	show_arena_tetris(arena_mass, score);
}

void kybik_fall(char arena_mass[20][12], int score)
{
	int h = 0;
	int d = 0;

	for (int i = 0; i <= 20; i++)
	{
		if ((arena_mass[h][d] == '0') && (arena_mass[h][d+1] == '0'))
		{
			if (_kbhit())
			{
				switch (_getch())
				{
				case 'd':
				{
					d++;
					arena_mass[h - 1][d - 1] = '0';
					arena_mass[h - 2][d - 1] = '0';
					arena_mass[h][d] = '#';
					arena_mass[h][d + 1] = '#';
					arena_mass[h - 2][d] = '0';
					arena_mass[h - 2][d + 1] = '0';
					break;
				}
				case 'a':
				{
					d--;
					arena_mass[h - 1][d + 2] = '0';
					arena_mass[h - 2][d + 2] = '0';
					arena_mass[h][d] = '#';
					arena_mass[h][d + 1] = '#';
					arena_mass[h - 2][d] = '0';
					arena_mass[h - 2][d + 1] = '0';
					break;
				}
				}
			}
			show_arena_tetris(arena_mass, score);
			arena_mass[h][d] = '#';
			arena_mass[h][d + 1] = '#';
			arena_mass[h - 2][d] = '0';
			arena_mass[h - 2][d + 1] = '0';
			Sleep(250);
			h++;
			system("cls");
		}
	}
}

void geska_fall(char arena_mass[20][12], int score)
{
	int h = 0;
	int d = 0;
	int r = 0;
	int w = 0;
	int q = 0;
	for (int i = 0; i < 20; i++)
	{
		if ((arena_mass[h][d] == '0') && (arena_mass[h][d + 1] == '0'))
		{
			if (_kbhit())
			{
				switch (_getch())
				{
				case 'd':
				{
					d++;
					arena_mass[h - 1][d - 1] = '0';
					arena_mass[h][d] = '#';
					arena_mass[h][d + 1] = '#';
					arena_mass[h - 3][d] = '0';
					arena_mass[h - 3][d + 1] = '0';
					arena_mass[h - 2][d] = '0';
					arena_mass[h - 1][d] = '0';
					break;
				}
				case 'a':
				{
					d--;
					arena_mass[h - 1][d + 2] = '0';
					arena_mass[h - 2][d + 2] = '0';
					arena_mass[h - 3][d + 2] = '0';
					arena_mass[h][d] = '#';
					arena_mass[h][d + 1] = '#';
					arena_mass[h - 3][d] = '0';
					arena_mass[h - 3][d + 1] = '0';
					arena_mass[h - 2][d] = '0';
					arena_mass[h - 1][d] = '0';
					break;
				}
				case 'r': // ok
				{
					r++;
					if (r == 1)
					{

						arena_mass[h - 3][d + 1] = '0';
						arena_mass[h - 2][d + 1] = '0';
						arena_mass[h - 2][d + 2] = '0';
						for (int j = 0; i <= 19; i++)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case'r':
								{
									r++;
									break;
								}

								}
							}
							if ((arena_mass[h][d] == '0') && (arena_mass[h][d + 1] == '0') && (arena_mass[h][d + 2] == '0'))
							{
							
								///////////////
								arena_mass[h][d] = '#';
								arena_mass[h - 1][d] = '#';
								arena_mass[h][d + 1] = '#';
								arena_mass[h][d + 2] = '#';
								arena_mass[h - 2][d] = '0';
								arena_mass[h - 1][d + 1] = '0';
								arena_mass[h - 1][d + 2] = '0';

								show_arena_tetris(arena_mass, score);
								h++;
								
								Sleep(250);
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'd':
									{
										d++;
										arena_mass[h - 1][d - 1] = '0';
										arena_mass[h - 2][d - 1] = '0';
										arena_mass[h - 3][d - 1] = '0';
										
										break;
									}
									case 'a':
									{
										d--;
										arena_mass[h - 1][d+3] = '0';
										arena_mass[h - 2][d + 1] = '0';
										
										break;
									}
									}
								}

								system("cls");
							}
						}
					}

					break;
				}
				case 'w':
				{
					w++;
					if (w == 1)
					{

						arena_mass[h - 3][d + 1] = '0';
						arena_mass[h - 2][d + 1] = '0';
						arena_mass[h - 2][d + 2] = '0';
						for (int j = 0; i <= 19; i++)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case'r':
								{
									r++;
									break;
								}

								}
							}
							if ((arena_mass[h][d] == '0') && (arena_mass[h][d + 1] == '0'))
							{

								///////////////
								arena_mass[h - 2][d] = '#';
								arena_mass[h-2][d + 1] = '#';
								arena_mass[h-1][d + 1] = '#';
								arena_mass[h][d + 1] = '#';
								arena_mass[h - 3][d + 1] = '0';
								arena_mass[h - 3][d] = '0';
								show_arena_tetris(arena_mass, score);
								
								h++;
								Sleep(250);
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'd':
									{
										d++;
										arena_mass[h - 2][d - 1] = '0';			
										arena_mass[h - 3][d - 1] = '0';
										break;
									}
									case 'a':
									{
										d--;
										arena_mass[h - 1][d + 2] = '0';
										arena_mass[h - 2][d + 2] = '0';
										arena_mass[h - 3][d + 2] = '0';
										break;
									}
									}
								}
								system("cls");
							}
						}
					}

					break;
				}
				case 'q': // ok
				{
					q++;
					if (q == 1)
					{

						arena_mass[h - 3][d + 1] = '0';
						arena_mass[h - 2][d + 1] = '0';
						arena_mass[h - 2][d + 2] = '0';
						for (int j = 0; i <= 19; i++)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case'r':
								{
									r++;
									break;
								}

								}
							}
							if ((arena_mass[h+1][d] == '0') && (arena_mass[h][d + 1] == '0') && (arena_mass[h][d + 2] == '0'))
							{

								///////////////
								arena_mass[h][d] = '#';
								arena_mass[h][d+1] = '#';
								arena_mass[h][d+2] = '#';
								arena_mass[h+1][d] = '#';
								arena_mass[h-1][d] = '0';
								arena_mass[h - 1][d + 1] = '0';
								arena_mass[h - 1][d + 2] = '0';

								show_arena_tetris(arena_mass, score);
								h++;
								Sleep(250);
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'd':
									{
										d++;
										arena_mass[h-1][d - 1] = '0';
										arena_mass[h][d - 1] = '0';
										
										break;
									}
									case 'a':
									{
										d--;
										arena_mass[h-1][d+3] = '0';
										arena_mass[h ][d] = '0';
										arena_mass[h ][d + 1] = '0';
										arena_mass[h ][d + 2] = '0';
										arena_mass[h+1][d] = '0';
										break;
									}
									}
								}
								system("cls");
							}
						}
					}

					break;
				}

				}
			}
		}
		if ((arena_mass[h][d] == '0') && (arena_mass[h][d+1] == '0'))
		{
			if ((r == 0) && (w == 0) && (q == 0))
			{
				show_arena_tetris(arena_mass, score);
				arena_mass[h][d] = '#';
				arena_mass[h][d + 1] = '#';
				arena_mass[h - 3][d] = '0';
				arena_mass[h - 3][d + 1] = '0';
				arena_mass[h - 2][d] = '0';
				arena_mass[h - 1][d] = '0';
			}
		}
		Sleep(250);
		h++;
		system("cls");
	}

	show_arena_tetris(arena_mass, score);
}

void piramidka_fall(char arena_mass[20][12], int score)
{
	int r = 0;
	int w = 0;
	int q = 0;
	int h = 0;
	int d = 0;
	for (int i = 0; i <= 20; i++)
	{

		if ((arena_mass[h][d] == '0') && (arena_mass[h][d + 1] == '0') && (arena_mass[h][d + 2] == '0'))
		{
			if (_kbhit())
			{
				switch (_getch())
				{
				case 'd':
				{
					d++;
					arena_mass[h - 1][d - 1] = '0';
					arena_mass[h - 2][d] = '0';
					arena_mass[h][d] = '#';
					arena_mass[h][d + 1] = '#';
					arena_mass[h][d + 2] = '#';
					arena_mass[h - 1][d] = '0';
					arena_mass[h - 2][d + 1] = '0';
					arena_mass[h - 1][d + 2] = '0';
					break;
				}
				case 'a':
				{
					d--;
					arena_mass[h - 1][d + 3] = '0';
					arena_mass[h - 2][d + 2] = '0';
					arena_mass[h][d] = '#';
					arena_mass[h][d + 1] = '#';
					arena_mass[h][d + 2] = '#';
					arena_mass[h - 1][d] = '0';
					arena_mass[h - 2][d + 1] = '0';
					arena_mass[h - 1][d + 2] = '0';
					break;
				}
				case 'r':
				{
					r++;
					if (r == 1)
					{

						arena_mass[h - 3][d + 1] = '0';
						arena_mass[h - 2][d + 1] = '0';
						arena_mass[h - 2][d + 2] = '0';
						for (int j = 0; i <= 19; i++)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case'r':
								{
									r++;
									break;
								}

								}
							}
							if ((arena_mass[h][d] == '0') && (arena_mass[h][d + 1] == '0') && (arena_mass[h][d + 2] == '0'))
							{

								///////////////
								arena_mass[h][d] = '#';
								arena_mass[h - 1][d] = '#';
								arena_mass[h - 2][d] = '#';
								arena_mass[h - 1][d + 1] = '#';
								arena_mass[h - 3][d] = '0';
								arena_mass[h - 2][d + 1] = '0';
								arena_mass[h - 2][d + 2] = '0';

								show_arena_tetris(arena_mass, score);
								h++;
								Sleep(250);
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'd':
									{
										d++;
										arena_mass[h - 1][d - 1] = '0';
										arena_mass[h - 2][d - 1] = '0';
										arena_mass[h - 3][d - 1] = '0';
										break;
									}
									case 'a':
									{
										d--;
										arena_mass[h - 1][d + 4] = '0';
										arena_mass[h - 3][d + 1] = '0';

										break;
									}
									}
								}
								system("cls");
							}
						}
					}

					break;
				}
				case 'w':
				{
					w++;
					if (w == 1)
					{

						arena_mass[h - 3][d + 1] = '0';
						arena_mass[h - 2][d + 1] = '0';
						arena_mass[h - 2][d + 2] = '0';
						for (int j = 0; i <= 19; i++)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case'r':
								{
									r++;
									break;
								}

								}
							}
							if ((arena_mass[h + 1][d] == '0') && (arena_mass[h + 1][d + 1] == '0') && (arena_mass[h + 1][d + 2] == '0'))
							{

								///////////////
								arena_mass[h][d] = '#';
								arena_mass[h][d + 1] = '#';
								arena_mass[h + 1][d + 1] = '#';
								arena_mass[h][d + 2] = '#';
								arena_mass[h - 1][d] = '0';
								arena_mass[h - 1][d + 1] = '0';
								arena_mass[h - 1][d + 2] = '0';

								show_arena_tetris(arena_mass, score);
								h++;
								Sleep(250);
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'd':
									{
										d++;
										arena_mass[h][d - 4] = '0';
										arena_mass[h - 1][d - 1] = '0';

										break;
									}
									case 'a':
									{
										d--;
										arena_mass[h - 1][d + 3] = '0';
										arena_mass[h][d] = '0';
										arena_mass[h - 1][d + 1] = '0';
										break;
									}
									}
								}
								system("cls");
							}
						}
					}

					break;
				}
				case 'q':
				{
					q++;
					if (q == 1)
					{

						arena_mass[h - 3][d + 1] = '0';
						arena_mass[h - 2][d + 1] = '0';
						arena_mass[h - 2][d + 2] = '0';
						for (int j = 0; i <= 19; i++)
						{
							if (_kbhit())
							{
								switch (_getch())
								{
								case'r':
								{
									r++;
									break;
								}

								}
							}
							if ((arena_mass[h][d] == '0') && (arena_mass[h][d + 1] == '0') && (arena_mass[h][d + 2] == '0'))
							{

								///////////////
								arena_mass[h][d] = '#';
								arena_mass[h - 1][d] = '#';
								arena_mass[h - 2][d] = '#';
								arena_mass[h - 1][d - 1] = '#';
								arena_mass[h - 3][d] = '0';
								arena_mass[h - 2][d - 1] = '0';
								arena_mass[h - 2][d + 2] = '0';

								show_arena_tetris(arena_mass, score);
								h++;
								Sleep(250);
								if (_kbhit())
								{
									switch (_getch())
									{
									case 'd':
									{
										d++;
										arena_mass[h - 2][d - 2] = '0';
										arena_mass[h - 3][d - 1] = '0';
										break;
									}
									case 'a':
									{
										d--;
										arena_mass[4 - 1][d - 1] = '0';

										arena_mass[h - 1][d + 1] = '0';
										arena_mass[h - 2][d + 1] = '0';
										arena_mass[h - 3][d + 1] = '0';
										break;
									}
									}
								}
								system("cls");
							}
						}
					}

					break;
				}

				}
			}

			show_arena_tetris(arena_mass, score);
			if ((r == 0) && (w == 0) && (q == 0))
			{
				arena_mass[h][d] = '#';
				arena_mass[h][d + 1] = '#';
				arena_mass[h][d + 2] = '#';
				arena_mass[h - 1][d] = '0';
				arena_mass[h - 2][d + 1] = '0';
				arena_mass[h - 1][d + 2] = '0';
			}
			h++;
			Sleep(250);
			system("cls");

		}

	}
	show_arena_tetris(arena_mass, score);
}

int win_stirannya(char arena_mass[20][12], int score)
{
	int perevirk;
	int nada = 0;

	for (int i = 20; i > 0; i--)
	{
		perevirk = 0;
		for (int j = 0; j < 12; j++)
		{
			if (arena_mass[i][j] == '#')
			{
				perevirk++;
			}
			if (perevirk == 12)
			{
				nada = i;
				for (int h = 0; h < 1; h++)
				{
					for (int k = 0; k < 12; k++)
					{
						arena_mass[nada][k] = '0';
						score += 85;
					}
					for (int k = 0; k < 12; k++)
					{
						arena_mass[nada][k] = arena_mass[nada - 1][k];
					}
				}
			}
		}
	}
	return score;
}

void kapusta(int score, char arena_mass[20][12])
{
	int i = 0;
	for (int j = 0; j < 12; j++)
	{
		if (arena_mass[i][j] == '#')
		{
			cout << "You lose | Score: " << score << endl;
			Sleep(1000);
			system("cls");

		}
	}

}

void padannya_random(char arena_mass[20][12], int score)
{
	int n = 2;
	while (_kbhit() != ('a'))
	{
		n = rand() % 5 + 0;
		if (n == 1)
		{
			Sleep(10);
			system("cls");
			kapusta(score, arena_mass);
			piramidka_fall(arena_mass, score); // piramidka
			win_stirannya(arena_mass, score);
		}
		else if (n == 2)
		{
			Sleep(10);
			system("cls");
			kapusta(score, arena_mass);
			geska_fall(arena_mass, score); // geska
			win_stirannya(arena_mass, score);
		}
		else if (n == 3)
		{
			Sleep(10);
			system("cls");
			kapusta(score, arena_mass);
			kybik_fall(arena_mass, score); // kubik
			win_stirannya(arena_mass, score);
		}
		if (n == 4)
		{
			Sleep(10);
			system("cls");
			kapusta(score, arena_mass);
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
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 3));
	cout << " TETRISTETRISTETRIS   TETRISTETRIS  TETRISTETRISTETRIS   TETRISTETRIS        TETRIS     TETRISTETRIS  " << endl;
	cout << " TETRISTETRISTETRIS   TETRISTETRIS  TETRISTETRISTETRIS   TETRIS    TETRIS    TETRIS    TETRISTETRIS   " << endl;
	cout << "       TETRIS         TETRIS              TETRIS         TETRIS    TETRIS               TETRIS        " << endl;
	cout << "       TETRIS         TETRISTETRIS        TETRIS         TETRISTETRIS        TETRIS        TETRIS    " << endl;
	cout << "       TETRIS         TETRISTETRIS        TETRIS         TETRISTETRIS        TETRIS          TETRIS  " << endl;
	cout << "       TETRIS         TETRIS              TETRIS         TETRIS    TETRIS    TETRIS        TETRIS    " << endl;
	cout << "       TETRIS         TETRISTETRIS        TETRIS         TETRIS     TETRIS   TETRIS    TETRISTETRIS  " << endl;
	cout << "       TETRIS         TETRISTETRIS        TETRIS         TETRIS     TETRIS   TETRIS  TETRISTETRIS   " << endl;
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
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
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 4));
		cout << "for play you ned engl stowage" << endl;
		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
		cout << "Tap random key" << endl;
		_getch();
		padannya_random(arena_mass, score);
	}
	else if (menuu == 2)
	{
		system("cls");
		cout << "TOP SCORE PLAYER" << endl;

		cout << "1. Saratov Oleg        | 100 000  " << endl;
		cout << "2. Nazar Politaev loh  | 50 000  " << endl;
		cout << "3. Max Gomon           | 25 000  " << endl;
		cout << "4. Gachi Muchi         | 10 000  " << endl;
		cout << "5. Ricardo Millos      | 5 000  " << endl;
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


int main()
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