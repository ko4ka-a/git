#include <iostream>
using namespace std;
int board[8][8];
void queen(int i, int j)
{
	for (int k = 0; k < 8; ++k)
	{
		++board[k][j];
		++board[i][k];
		int diag;
		diag = j - i + k;
		if (diag >= 0 && diag < 8) 
			++board[k][diag];
		diag = j + i - k;
		if (diag >= 0 && diag < 8)
			++board[k][diag];
	}
	board[i][j] = 2;
}
void resetQueen(int i, int j)
{
	for (int k = 0; k < 8; ++k)
	{
		--board[k][j];
		--board[i][k];
		int diag;
		diag = j - i + k;
		if (diag >= 0 && diag < 8)
			--board[k][diag];
		diag = j + i - k;
		if (diag >= 0 && diag < 8)
			--board[k][diag];
	}
	board[i][j] = 0;
}
bool Queeninline(int i) 
{
	bool a = false;
	for (int j = 0; j < 8; ++j)
	{
		if (board[i][j] == 0)
		{
			queen(i, j);
			if (i == 7)
				a = true;
			else
			{
				if (!(a = Queeninline(i + 1)))
					resetQueen(i, j);
			}
		}
		if (a= true)
			break;
	}
	return a;
}
int main() 
{
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			board[i][j] = 0;
		}
	}
	queen(0,0);
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (board[i][j] = 2)
				cout << "Q ";
			else
				cout << "[] ";
		}
		cout << endl;
	}
	return 0;
}