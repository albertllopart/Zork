#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	char* name= nullptr;
	int position;
	enum location {Hall};
public:
	Player();
	char* CheckName();
	int CheckPosition();
	void ModifyName(char name[25]);
	void ModifyPosition(int next);
	~Player();
};