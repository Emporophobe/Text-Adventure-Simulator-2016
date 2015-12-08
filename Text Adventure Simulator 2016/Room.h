#pragma once

#include "Thing.h"

#include <string>
#include <vector>

class Room
{
public:
	Room();
	~Room();
	Room(std::string name, std::string blurb);

	void look() const; // prints description of room and everything in room

	void addThing(Thing &thing);
	void removeThing(Thing &thing);

	void addAdjacentRoom(Room *r, std::string direction);

private:
	std::string name; // name of room
	std::string blurb; // description
	std::vector<Thing> contents; // things in the room
	std::vector<std::pair<Room*, std::string>> adjacent; // neighboring rooms
	
};

