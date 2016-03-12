#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string name;
	string description;
public:
	Player();
	Player(string name, string description);
	~Player();
	string CheckName();
	string CheckDescription();
};