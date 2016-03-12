#include "ClassExit.h"

Exit::Exit()
{

};
void Exit::ModifyExit(const string &name,  const string &description)
{
	this->name = name;
	this->description = description;
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