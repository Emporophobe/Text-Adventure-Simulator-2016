#include "Room.h"

#include <iostream>

Room::Room()
{
}

Room::~Room()
{
}

Room::Room(std::string name, std::string blurb)
	:name(name), blurb(blurb)
{
}

void Room::look() const
{
	std::cout << name << ": " << blurb << std::endl;
	
	for (int i = 0; i < contents.size(); i++)
	{
		contents[i].look();
	}
}

void Room::addThing(Thing &thing)
{
	contents.push_back(thing);
}

void Room::removeThing(Thing &thing)
{
	for (int i = 0; i < contents.size(); i++)
	{
		if (contents[i] == thing)
		{
			contents.erase(contents.begin() + i); // remove the thing
		}
	}
}

void Room::addAdjacentRoom(Room *r, std::string direction)
{
	std::pair<Room*, std::string> newRoom(r, direction);
	adjacent.push_back(newRoom);
}