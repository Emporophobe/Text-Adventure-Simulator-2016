#pragma once

#include "Room.h"

#include <vector>

class Map
{
public:
	Map();
	~Map();
	Map(int mapNum); // choose a predefined map

	std::vector<Room> makeMap1();

private:
	std::vector<Room> map1;
	std::vector<std::vector<Room>> map;
};

