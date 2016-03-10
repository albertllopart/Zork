#ifndef FUNC
#define FUNC

class World
{
public:
	void CreateWorld();

};

class Room
{
public:

	char name[25];
	char description[100];

};

class Exit
{
public:
	bool door();
};

class Player
{
public:
	bool health();
};

#endif