#include "Thing.h"

#include <iostream>

Thing::Thing()
{
}

Thing::~Thing()
{
}

Thing::Thing(std::string name, std::string blurb)
	:name(name), blurb(blurb)
{
}

void Thing::look() const
{
	std::cout << name << ": " << blurb << std::endl;
}

bool Thing::operator==(Thing &other) const
{
	return name == other.name &&
		blurb == other.blurb;
}

