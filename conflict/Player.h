#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
	Player(std::string name);
	std::string getName() const;
	void setName(std::string name);

private:
	std::string name_;
};

#endif