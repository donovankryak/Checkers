#ifndef BOARD_H_
#define BOARD_H_

#include "piece.h"
#include <iostream>

class Board {
protected:
	const int xSize;
	const int ySize;

	Piece * * const * const board;

public:
	virtual Board() = 0;

	virtual Board(const int, const int) = 0;

	virtual ~Board();

	virtual Piece* pieceAt(int, int) const;

	virtual Piece* pieceAt(const Position&) const;

	virtual Piece* operator()(int, int) const;

	virtual Piece* movePiece(const Position&, const Position&);

	virtual Side getWinner() const;
	
	void printDisplay(xSize, ySize);
	
	void printDisplay(xSize, ySize) {
		int x; int y; int z;
		printf("   x---x---x---x---x---x---x---x---x---x\n");
		
		for (x=0; x<xSize; ++x;)
		{
			printf("%d |", x+1);
			for (y=0; y<ySize; ++y)
			{
				printf("%c |");
			}
		printf("\n");
		printf("   x---x---x---x---x---x---x---x---x---x\n");
		}
		printf("   a   b   c   d   e   f   g   h\n");
	
	};

virtual friend std::ostream& operator<<(std::ostream&, const Board&);

#endif
