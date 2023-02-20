// Tile.h
#include <vector>

class Tile
{
public:
    Tile(); // default constructor for pointer usage
    Tile(int y, int x);
    Tile(int y, int x, char symbol);

    int getY();
    int getX();
    char getSymbol();

private:
    int y;
    int x;
    char symbol;
};