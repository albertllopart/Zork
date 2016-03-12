#include "ClassCommand.h"

void Command::ReadInstruction(const string instr, int &dir)
{
	if (instr == "help")
	{
		cout << "ajuda xd" << endl;
		dir = stay;
	}
	else if (instr == "quit")
	{
		cout << "dw" << endl;
		dir = quit;
	}
	else if (instr == "look")
	{
		string dire;
		cin >> dire;

		if (dire == "north") dir = looknorth;
		else if (dire == "south") dir = looksouth;
		else if (dire == "east") dir = lookeast;
		else if (dire == "west") dir = lookwest;
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

		if (dire == "north") dir = gonorth;
		else if (dire == "south") dir = gosouth;
		else if (dire == "east") dir = goeast;
		else if (dire == "west") dir = gowest;
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

		if (dire == "north") dir = opennorth;
		else if (dire == "south") dir = opensouth;
		else if (dire == "east") dir = openeast;
		else if (dire == "west") dir = openwest;
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

		if (dire == "north") dir = closenorth;
		else if (dire == "south") dir = closesouth;
		else if (dire == "east") dir = closeeast;
		else if (dire == "west") dir = closewest;
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
