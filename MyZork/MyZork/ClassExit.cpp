#include "ClassExit.h"

Exit::Exit()
{
	open = true;
};
void Exit::ModifyExit(const string &name,  const string &description)
{
	this->name = name;
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
string Exit::CheckName()
{
	return name;
}
string Exit::CheckDescription()
{
	return description;
}
Exit::~Exit(){};