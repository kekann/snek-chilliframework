#include "Board.h"
#include <assert.h>

Board::Board(Graphics& gfx)
	:
	gfx1 (gfx)
{}

void Board::DrawCell(const Location & loc, Color c)
{
	assert (loc.x >= 0);
	assert (loc.x < width);
	assert (loc.y >= 0);
	assert (loc.y < height);

	gfx1.DrawRectDim(loc.x*dimension, loc.y*dimension, dimension, dimension, c);
}

bool Board::IsInsideBoard(const Location& loc) const
{
	return loc.x >= 0 && loc.x < width &&
		loc.y >= 0 && loc.y < height;
}

int Board::GetGridWidth() const
{
	return width;
}

int Board::GetGridHeight() const
{
	return height;
}
