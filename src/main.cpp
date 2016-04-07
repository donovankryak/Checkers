using namespace std;
#include <cmath>
#include <iostream>

#define VACANT 1
#define RED 2
#define BLACK 3
#define RKING 4
#define BKING 5

#define ISRED(x) (x == RKING || x == RED)
#define ISBLACK(x) (x== BKING || x == BLACK)
#define ISVACANT(x) (x ==1)

#define ROW 8
#define COL 8

void printDisplay(int board[][COL]);
void swapIJKL(int board[ROW][COL], int i, int j, int k, int l);
char pieceprints(int i);
void printDisplayFancy(int board[][COL]);
int Playersturn(int board[][COL], int player,int i,int j,int k,int l);

char pieceprints(int i)
{
	switch(i)
	{
	case 0:
		return '#';
	case 1: 
		return ' ';
	case 2:
		return 'R';
	case 3:
		return 'B';
	}
	return ('X');
}

int main(int argc, char *argv[]) {
	//TODO
	int board[ROW][COL] = 
	{
	{2,1,2,1,2,1,2,1},
	{1,2,1,2,1,2,1,2},
	{2,1,2,1,2,1,2,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,3,1,3,1,3,1,3},
	{3,1,3,1,3,1,3,1},
	{1,3,1,3,1,3,1,3},
	}
	return 0;
}
