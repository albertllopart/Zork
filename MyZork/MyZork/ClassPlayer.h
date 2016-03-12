#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string name;
	string description;
	int position;
	enum location {Hall};
public:
	Player();
	~Player();
	string CheckName();
	string CheckDescription();
	int CheckPosition();
	void ModifyName(const string &name);
};