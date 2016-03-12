#include "ClassExit.h"

Exit::Exit()
{

};
Exit::Exit(string name, string description)
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