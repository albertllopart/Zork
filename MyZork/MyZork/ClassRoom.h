#include<iostream>
#include<string>

using namespace std;

class Room
{
private:
	string name;
	string description;
public:
	Room();
	~Room();
	string CheckName();
	string CheckDescription();
	void ModifyRoom(const string &name, const string &description);
};
