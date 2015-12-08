#pragma once

#include <string>

class Thing
{
public:
	Thing();
	~Thing();
	Thing(std::string name, std::string blurb);

	void look() const;

	bool operator==(Thing &other) const;

private:
	std::string name; // name of thing
	std::string blurb; // description
};

