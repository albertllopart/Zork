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
	Room(string name, string description);
	~Room();
	string CheckName();
	string CheckDescription();
};
