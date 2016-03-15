#include "ClassExit.h"

Exit::Exit()
{
	description = new char[250];
	open = false;
};
void Exit::ModifyExit(char description[250])
{
	this->description = description;
}
bool Exit::IsOpen()
{
	return open;
}
void Exit::ModifyState()
{
	if (open) open = false;
	else open = true;
}
char* Exit::CheckDescription()
{
	return description;
}
Exit::~Exit()
{
	
}