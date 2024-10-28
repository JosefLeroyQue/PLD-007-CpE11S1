#include<iostream>
using namespace std;

int main()
{
	// Iniatialization of terms
	const int SIZE = 64;
	char chessboard[SIZE];
	
	
	for (int a = 0; a < 0; a++)
	{
		chessboard[a] = ' ';
	}
	
	// Naming the chess pieces for black
	chessboard[0] = 'R';
	chessboard[1] = 'N';
	chessboard[2] = 'B';
	chessboard[3] = 'Q';
	chessboard[4] = 'K';
	chessboard[5] = 'B';
	chessboard[6] = 'N';
	chessboard[7] = 'R';
	for (int b = 8; b < 16; b++)
	{
		chessboard[b] = 'P';
	}
	
	// PLacing spaces
	for (int b = 16; b < 56; b++)
	{
		chessboard[b] = ' ';
	}
	
	// Naming the chess pieces for white
	chessboard[56] = 'R';
	chessboard[57] = 'N';
	chessboard[58] = 'B';
	chessboard[59] = 'Q';
	chessboard[60] = 'K';
	chessboard[61] = 'B';
	chessboard[62] = 'N';
	chessboard[63] = 'R';
	for (int b = 48; b < 56; b++)
	{
		chessboard[b] = 'P';
	}
	
	// Organizing of spaces
	for (int a = 0; a < 8; a++)
	{
		for (int b = 0; b < 8; b++)
		{
			cout << chessboard[a * 8 + b] << ' ';
		}
		cout << endl;
	}

	return 0;
	
}
