#pragma once

#include "Player.h"
#include "Room.h"

#include <string>
#include <vector>

// handles command parsing
class Narrator
{
public:
	Narrator();
	~Narrator();

	void makeWorld(); // creates the initial world
	void narrate(); // game loop, processes input

	void getInput(); // read input from console
	void parseInput(); // parse input

private:
	std::string command; // last command entered

	Player protagonist;
	std::vector<Room> map;
};

