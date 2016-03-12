#include "ClassRoom.h"

Room::Room()
{

}
Room::Room(string name, string description)
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