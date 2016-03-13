#include <iostream>
#include <string>

using namespace std;

class Exit
{
private:
	string name;
	string description;
	bool open;
public:
	Exit();
	~Exit();
	string CheckName();
	string CheckDescription();
	void ModifyExit(const string &name, const string &description);
	bool IsOpen();
	void ModifyState();
};