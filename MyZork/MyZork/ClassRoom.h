#include<iostream>
#include<string>

using namespace std;

class Room
{
private:
	string name;
	string description;
	int options[4];
	int doors[4];

public:
	Room();
	~Room();
	string CheckName();
	string CheckDescription();
	void ModifyRoom(const string &name, const string &description);
	void ModifyOptions(int n, int s, int e, int w);
	void ModifyDoors(int n, int s, int e, int w);
	int CheckOptions(int dir);
	int CheckDoors(int dir);
};

