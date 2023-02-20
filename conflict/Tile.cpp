// Tile.cpp
#include "Tile.h"

Tile::Tile() {} // default constructor for pointer usage

Tile::Tile(int y, int x) : y(y), x(x), symbol('+') {}

Tile::Tile(int y, int x, char symbol) : y(y), x(x), symbol(symbol) {}

int Tile::getY()
{
	return y;
}

int Tile::getX()
{
	return x;
}

char Tile::getSymbol()
{
	return symbol;
}