#include "Board.h"

#include "Board.h"

#include <iostream>
#include <utility>

/* Class Concepts:
* A Board is a 2D array of tiles, accessible via index.
* A Board will be a part of a game, and players will take actions that will impact the board
* A Board will also have some form of visualization, at the moment print out from the console.
* We are implementing the rule of 5 here, as a demonstration, I don't think it will really be required later.
*/

// Constructor: provide dimensions (note: nullptr because generateTiles will set pointer)
Board::Board(int height, int width) : tiles(nullptr), height(height), width(width)
{
	generateTiles();
}


// Copy constructor. duplicate another board with a &copy of another
Board::Board(const Board& other) : tiles(nullptr), height(other.height), width(other.width)
{
	generateTiles();
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			tiles[i][j] = other.tiles[i][j];
		}
	}
}

// Move constructor
Board::Board(Board&& other) : tiles(nullptr), height(0), width(0)
{
	std::swap(tiles, other.tiles);
	std::swap(height, other.height);
	std::swap(width, other.width);
}


// Learning note: &Board indicates that it is a constructor for a reference &
// Copy assignment operator
Board& Board::operator=(const Board& other)
{
	if (this != &other)
	{
		Board temp(other);
		std::swap(tiles, temp.tiles);
		std::swap(height, temp.height);
		std::swap(width, temp.width);
		return *this;
	}
}

// Move assignment operator
Board& Board::operator=(Board&& other)
{
	std::swap(tiles, other.tiles);
	std::swap(height, other.height);
	std::swap(width, other.width);
	return *this;
}

// Destructor
Board::~Board()
{
	deleteTiles();
}

// getters
Tile** Board::getTiles() const
{
	return tiles;
}

int Board::getHeight() const
{
	return height;
}

int Board::getWidth() const
{
	return width;
}

std::ostream& operator<<(std::ostream& os, const Board& board)
{
	for (int i = 0; i < board.height; i++)
	{
		for (int j = 0; j < board.width; j++)
		{
			os << board.tiles[i][j].getSymbol() << " ";
		}
		os << std::endl; // new line
	}
	return os;
}

void Board::generateTiles()
{
	tiles = new Tile*[height]; // pointer to tile rather than a tile itself
	for (int i = 0; i < height; i++)
	{
		tiles[i] = new Tile[width];
		for (int j = 0; j < width; j++)
		{
			tiles[i][j] = Tile(i, j, 'X');
		}
	}
}

void Board::deleteTiles()
{
	for (int i = 0; i < height; i++)
	{
		delete[] tiles[i];
	}
	delete[] tiles;
}

