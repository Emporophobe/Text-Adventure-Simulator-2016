#include "Player.h"

#include <iostream>

Player::Player()
{
}

Player::~Player()
{
}

void Player::move(Room &dest)
{
	currentRoom = dest;
}

void Player::look()
{
	currentRoom.look();
}