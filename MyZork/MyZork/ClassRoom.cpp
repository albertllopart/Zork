#include "ClassRoom.h"

Room::Room()
{

}
void Room::ModifyRoom(const string &name, const string &description)
{
	this->name = name;
	this->description = description;
}
void Room::ModifyOptions(int n, int s, int e, int w)
{
	options[0] = n;
	options[1] = s;
	options[2] = e;
	options[3] = w;
}
void Room::ModifyDoors(int n, int s, int e, int w)
{
	doors[0] = n;
	doors[1] = s;
	doors[2] = e;
	doors[3] = w;
}
int Room::CheckOptions(int dir)
{
	return options[dir];
}
int Room::CheckDoors(int dir)
{
	return doors[dir];
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