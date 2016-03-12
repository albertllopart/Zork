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
		int dir = 0;
		cin >> instruction;
		Command command;
		command.ReadInstruction(instruction, dir);

		if (dir == -1) playing = false;
	}
}