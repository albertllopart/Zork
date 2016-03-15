#include "ClassRoom.h"
#include "ClassExit.h"
#include "ClassPlayer.h"
#include "ClassCommand.h"
#include <vector>

class World
{
private:
	Room* rooms = nullptr;
	Exit* exits = nullptr;
	
public:
	World();
	void CreateWorld();
	void CheckRoom(int i);
	void Execute(char instruction[25], int dir, int &position);
	~World();
};