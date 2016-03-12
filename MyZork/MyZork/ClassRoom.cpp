#include "ClassRoom.h"

Room::Room()
{

}
void Room::ModifyRoom(const string &name, const string &description)
{
	this->name = name;
	this->description = description;
}
string Room::CheckName()
{
	return name;
}
string Room::CheckDescription()
{
	return description;
}
Room::~Room(){};