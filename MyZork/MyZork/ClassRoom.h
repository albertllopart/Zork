#include<iostream>
#include<string>

using namespace std;

class Room
{
private:
	char* name = nullptr;
	char* description = nullptr;
	int options[4];
	int doors[4];

public:
	Room();
	char* CheckName();
	char* CheckDescription();
	void ModifyRoom(char nam[25], char descriptio[250]);
	void ModifyOptions(int n, int s, int e, int w);
	void ModifyDoors(int n, int s, int e, int w);
	int CheckOptions(int dir);
	int CheckDoors(int dir);
	~Room();
};

