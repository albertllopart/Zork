#include "ClassCommand.h"

void Command::ReadInstruction(const string instr, int &dir)
{
	if (instr == "help")
	{
		cout << "ajuda xd" << endl;
		dir = stay;
	}
	else if (instr == "look")
	{
		string dire;
		cin >> dire;

		if (dire == "north") dir = north;
		else if (dire == "south") dir = south;
		else if (dire == "east") dir = east;
		else if (dire == "west") dir = west;
		else
		{
			dir = stay;
			cout << "eing" << endl;
		}
	}
	else if (instr == "go")
	{
		string dire;
		cin >> dire;

		if (dire == "north") dir = north;
		else if (dire == "south") dir = south;
		else if (dire == "east") dir = east;
		else if (dire == "west") dir = west;
		else
		{
			dir = stay;
			cout << "eing" << endl;
		}
	}
	else if (instr == "open")
	{
		string dire;
		cin >> dire;

		if (dire == "north") dir = north;
		else if (dire == "south") dir = south;
		else if (dire == "east") dir = east;
		else if (dire == "west") dir = west;
		else
		{
			dir = stay;
			cout << "eing" << endl;
		}
	}
	else if (instr == "close")
	{
		string dire;
		cin >> dire;

		if (dire == "north") dir = north;
		else if (dire == "south") dir = south;
		else if (dire == "east") dir = east;
		else if (dire == "west") dir = west;
		else
		{
			dir = stay;
			cout << "eing" << endl;
		}
	}
	else
	{
		cout << "whattt" << endl;
		dir = stay;
	}
}
