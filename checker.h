#pragma once
using namespace std;
#include <string>
class checker
{
public:
	checker(const char& color, const bool& isKing, int x, int y);
	~checker();
	void setColor(char color);
	void setKing(bool isKing);
	char getColor() const;
	bool getIsKing() const;
	int getXLoc() const;
	int getYLoc() const;
	void setXLoc(int x);
	void setYLoc(int y);

private:
	bool isKing;
	char color;
	int x;
	int y;
};
