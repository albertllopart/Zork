#include <stdio.h>
#include "ClassWorld.h"



int main()
{
	World dungeon;
	Player adventurer;
	string advName;

	cout << "What's your name?" << endl;
	cin >> advName;
	adventurer.ModifyName(advName);

	cout << "Si miri bona nit" << endl;

	bool playing = true;

	while (playing)
	{
		cout << "fes algo nen" << endl;
		string instruction;
		int dir = -1;
		cin >> instruction;
		if (instruction == "quit") playing = false;
		else
		{
			Command command;
			command.ReadInstruction(instruction, dir);
			int position = adventurer.CheckPosition();
			dungeon.Execute(instruction, dir, position);
			adventurer.ModifyPosition(position);
		}
	}
}
