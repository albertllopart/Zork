#include "ClassWorld.h"

World::World()
{
	string name, description;
	name = "Hall";
	description = "blahall";
	rooms[0].ModifyRoom(name, description);
	rooms[0].ModifyOptions(2, -1, -1, 1);
	rooms[0].ModifyDoors(1, -1, -1, 0);

	name = "Misterious";
	description = "blamist";
	rooms[1].ModifyRoom(name, description);
	rooms[1].ModifyOptions(-1, -1, 0, -1);
	rooms[1].ModifyDoors(-1, -1, 0, -1);

	name = "Puzzle Room";
	description = "blapuzzle";
	rooms[2].ModifyRoom(name, description);
	rooms[2].ModifyOptions(-1, 0, 4, 3);
	rooms[2].ModifyDoors(-1, 1, 3, 2);

	name = "SnSRoom";
	description = "blasns";
	rooms[3].ModifyRoom(name, description);
	rooms[3].ModifyOptions(-1, -1, 2, -1);
	rooms[3].ModifyDoors(-1, -1, 2, -1);

	name = "Bat Room";
	description = "blabat";
	rooms[4].ModifyRoom(name, description);
	rooms[4].ModifyOptions(-1, -1, -1, 2);
	rooms[4].ModifyDoors(-1, -1, -1, 3);

	name = "exit 0";
	description = "0";
	exits[0].ModifyExit(name, description);

	name = "exit 1";
	description = "1";
	exits[1].ModifyExit(name, description);

	name = "exit 2";
	description = "2";
	exits[2].ModifyExit(name, description);

	name = "exit 3";
	description = "3";
	exits[3].ModifyExit(name, description);
}
void World::CheckRoom(int i)
{
	cout << rooms[i].CheckName() << " " << rooms[i].CheckDescription() << endl;
}
void World::Execute(string instruction, int dir, int &position)
{
	if (instruction == "look")
	{
		if (rooms[position].CheckDoors(dir) != -1)
		{
			cout << exits[rooms[position].CheckDoors(dir)].CheckName() << endl << exits[rooms[position].CheckDoors(dir)].CheckDescription() << endl;
		}
	}
	else if (instruction == "go")
	{
		if (rooms[position].CheckOptions(dir) != -1)
		{
			position = rooms[position].CheckOptions(dir);
			cout << rooms[position].CheckName() << endl << rooms[position].CheckDescription() << endl;
		}
	}
	else if (instruction == "open")
	{

	}
	else if (instruction == "close")
	{

	}
}
World::~World(){}