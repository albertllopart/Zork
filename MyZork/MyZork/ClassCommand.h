#include <iostream>
#include <string>

using namespace std;

class Command
{
private:
	enum dir {quit = -1, stay, looknorth, looksouth, lookeast, lookwest, gonorth, gosouth, goeast, gowest, opennorth, opensouth, openeast, openwest, closenorth, closesouth, closeeast, closewest};
public:
	Command(){};
	~Command(){};
	void ReadInstruction(const string instr, int &dir);
};