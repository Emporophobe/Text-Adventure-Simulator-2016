#include "Narrator.h"

#include <iostream>

Narrator::Narrator()
	:protagonist()
{
	//Room start("Test Room", "Test room please ignore");
	//map.push_back(start);
	//protagonist.move(start);
}


Narrator::~Narrator()
{
}

void Narrator::makeWorld()
{
	Room r = Room("Room 1", "Room!");
	Thing t = Thing("Foo", "A Foo is a (make-foo bar baz)");
	r.addThing(t);

	map.push_back(r);

	protagonist.move(r);
}

void Narrator::narrate()
{
	makeWorld();

	while (command != "quit")
	{
		getInput();
		parseInput();
	}
}

void Narrator::getInput()
{
	std::cout << ">> ";
	std::cin >> command;
}


void Narrator::parseInput()
{
	if (command == "look")
	{
		protagonist.look();
	}
	else if (command == "quit")
	{
		std::cout << "Goodbye." << std::endl;
	}
	else
	{
		std::cout << "I'm sorry, I'm afraid I can't do that." << std::endl;
	}
}