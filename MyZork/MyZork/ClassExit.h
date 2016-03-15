#include <iostream>
#include <string>

using namespace std;

class Exit
{
private:
	char* description = nullptr;
	bool open;
public:
	Exit();
	char* CheckDescription();
	void ModifyExit(char description[250]);
	bool IsOpen();
	void ModifyState();
	~Exit();
};