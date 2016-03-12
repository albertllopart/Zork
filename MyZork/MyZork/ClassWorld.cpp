#include "ClassWorld.h"

World::World()
{
	string name, description;
	name = "Hall";
	description = "blahall";
	rooms[0].ModifyRoom(name, description);

	name = "Misterious";
	description = "blamist";
	rooms[1].ModifyRoom(name, description);

	name = "Puzzle Room";
	description = "blapuzzle";
	rooms[2].ModifyRoom(name, description);

	name = "SnSRoom";
	description = "blasns";
	rooms[3].ModifyRoom(name, description);

	name = "Bat Room";
	description = "blabat";
	rooms[4].ModifyRoom(name, description);
	
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
World::~World(){}