#include "ClassPlayer.h"

Player::Player()
{
	description = "soc un puto amo";
	position = Hall;
}
string Player::CheckName()
{
	return name;
}
string Player::CheckDescription()
{
	return description;
}
int Player::CheckPosition()
{
	return position;
}
void Player::ModifyName(const string &name)
{
	this->name = name;
}
Player::~Player(){};