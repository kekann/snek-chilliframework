#pragma once
#include "Graphics.h"
#include "Location.h"
#include<assert.h>
class Board
{
public:
	Board ( Graphics& gfx);
	void DrawCell(const Location& loc, Color c);
	int GetGridWidth() const;
	int GetGridHeight() const;
	bool IsInsideBoard(const Location& loc) const;
private:
	static constexpr int dimension = 20;
	static constexpr int width = 20;
	static constexpr int height = 20;
	Graphics& gfx1;
};

