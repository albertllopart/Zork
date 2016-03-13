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
	rooms[2].ModifyOptions(5, 0, 4, 3);
	rooms[2].ModifyDoors(4, 1, 3, 2);

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

	name = "Copper Room";
	description = "blablacopper";
	rooms[5].ModifyRoom(name, description);
	rooms[5].ModifyOptions(6, 2, -1, -1);
	rooms[5].ModifyDoors(5, 4, -1, -1);

	name = "Silver Room";
	description = "blasilver";
	rooms[6].ModifyRoom(name, description);
	rooms[6].ModifyOptions(9, 5, 8, 7);
	rooms[6].ModifyDoors(8, 5, 7, 6);

	name = "Annoying Toucan Room";
	description = "blatoucan";
	rooms[7].ModifyRoom(name, description);
	rooms[7].ModifyOptions(-1, -1, 6, -1);
	rooms[7].ModifyDoors(-1, -1, 6, -1);

	name = "Crack Room";
	description = "blacrack";
	rooms[8].ModifyRoom(name, description);
	rooms[8].ModifyOptions(10, -1, -1, 6);
	rooms[8].ModifyDoors(9, -1, -1, 7);

	name = "Grenade Room";
	description = "blagrenade";
	rooms[9].ModifyRoom(name, description);
	rooms[9].ModifyOptions(-1, 6, -1, -1);
	rooms[9].ModifyDoors(-1, 8, -1, -1);

	name = "Dragon Room";
	description = "bladragon";
	rooms[10].ModifyRoom(name, description);
	rooms[10].ModifyOptions(-1, 8, 11, -1);
	rooms[10].ModifyDoors(-1, 9, 10, -1);

	name = "Orb Room";
	description = "blaorb";
	rooms[11].ModifyRoom(name, description);
	rooms[11].ModifyOptions(-1, -1, -1, 10);
	rooms[11].ModifyDoors(-1, -1, -1, 10);

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

	name = "exit 4";
	description = "4";
	exits[4].ModifyExit(name, description);

	name = "exit 5";
	description = "5";
	exits[5].ModifyExit(name, description);

	name = "exit 6";
	description = "6";
	exits[6].ModifyExit(name, description);

	name = "exit 7";
	description = "7";
	exits[7].ModifyExit(name, description);

	name = "exit 8";
	description = "8";
	exits[8].ModifyExit(name, description);

	name = "exit 9";
	description = "9";
	exits[9].ModifyExit(name, description);

	name = "exit 10";
	description = "10";
	exits[10].ModifyExit(name, description);
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
		if (rooms[position].CheckOptions(dir) != -1 && exits[rooms[position].CheckDoors(dir)].IsOpen())
		{
			position = rooms[position].CheckOptions(dir);
			cout << rooms[position].CheckName() << endl << rooms[position].CheckDescription() << endl;
		}
		else if (rooms[position].CheckOptions(dir) == -1)
		{
			cout << "There's no room in that direction" << endl;
		}
		else
		{
			cout << "The door is closed" << endl;
		}
	}
	else if (instruction == "open")
	{
		if (rooms[position].CheckDoors(dir) != -1 && exits[rooms[position].CheckDoors(dir)].IsOpen() == false)
		{
			exits[rooms[position].CheckDoors(dir)].ModifyState();
			cout << "The door is now open" << endl;
		}
	}
	else if (instruction == "close")
	{
		if (rooms[position].CheckDoors(dir) != -1 && exits[rooms[position].CheckDoors(dir)].IsOpen())
		{
			exits[rooms[position].CheckDoors(dir)].ModifyState();
			cout << "The door is now closed" << endl;
		}
	}
}
World::~World(){}