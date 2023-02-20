#ifndef BOARD_H
#define BOARD_H

#include "Tile.h"
#include <iostream>
#include <string>

class Board
{
	public:
		// Constructors

		// Constructor with dimensions
		Board(int height, int width);

		// Constructor with tiles
		Board(Tile**);


		// Copy constructor
		Board(const Board& other);

		// Move constructor
		Board(Board&& other);

		// Copy assignment operator
		Board& operator=(const Board& other);

		// Move assignment operator
		Board& operator=(Board&& other);

		// Destructor
		~Board();

		// TODO: toString or override of <<

		// Getters
		Tile** getTiles() const;
		int getHeight() const;
		int getWidth() const;

		// Print (equivalent of Java toString override)
		friend std::ostream& operator<<(std::ostream& os, const Board& board);
	private:
		Tile** tiles; // This is used for a 2d array of tiles
		int height; // stored length of tiles
		int width; // stored length of tiles[0]

		void generateTiles();
		void deleteTiles();
};

#endif
