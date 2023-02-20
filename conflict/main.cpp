#include "Main.h"
#include <iostream>
#include "Board.h"
// file MAINly just for testing
int main()
{
	std::cout << "hello conflict" << std::endl;
	std::cout << "Let's try to make a board!" << std::endl;

	Board testBoard = Board(10, 10);
	std::cout << testBoard << std::endl;

	return 0;
}
