#include "ClassPlayer.h"

Player::Player()
{
	name = new char[25];
	position = Hall;
}
char* Player::CheckName()
{
	return name;
}
int Player::CheckPosition()
{
	return position;
}
void Player::ModifyName(char name[25])
{
	this->name = name;
}
void Player::ModifyPosition(int next)
{
	position = next;
}
Player::~Player()
{
	
}