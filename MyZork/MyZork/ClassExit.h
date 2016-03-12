#include <iostream>
#include <string>

using namespace std;

class Exit
{
private:
	string name;
	string description;
public:
	Exit();
	Exit(string name, string description);
	~Exit();
	string CheckName();
	string CheckDescription();
};