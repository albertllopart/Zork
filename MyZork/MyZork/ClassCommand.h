#include <iostream>
#include <string>

using namespace std;

class Command
{
private:
	enum dir {stay = -1, north, south, east, west};
public:
	Command(){};
	~Command(){};
	void ReadInstruction(const string instr, int &dir);
};