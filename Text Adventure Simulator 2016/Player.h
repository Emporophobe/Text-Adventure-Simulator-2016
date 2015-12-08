#pragma once

#include "Room.h"
#include "Thing.h"

#include <string>
#include <vector>

class Player
{
public:
	Player();
	~Player();

	void move(Room &dest);
	void look();

private:
	Room currentRoom;
	std::vector<Thing> inventory;

	//std::string command; // most recent command
	// int health;

};

