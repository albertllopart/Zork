#include "ClassPlayer.h"

Player::Player()
{

};
Player::Player(string name, string description)
{
	this->name = name;
	this->description = description;
}
string Player::CheckName()
{
	return name;
}
string Player::CheckDescription()
{
	return description;
}
Player::~Player(){};