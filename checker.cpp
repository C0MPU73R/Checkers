#include "checker.h"
checker::checker(const char& color, const bool& isKing, int x, int y) : color(color), isKing(isKing), x(x), y(y)
{
}
checker::~checker()
{
}
void checker::setColor(char color)
{
	this->color = color;
}
void checker::setKing(bool isKing)
{
	this->isKing = isKing;
}
char checker::getColor() const
{
	return this->color;
}
bool checker::getIsKing() const
{
	return this->isKing;
}

int checker::getXLoc() const
{
	return this->x;
}

int checker::getYLoc() const
{
	return this->y;
}

void checker::setXLoc(int x)
{
	this->x = x;
}

void checker::setYLoc(int y)
{
	this->y = y;
}
