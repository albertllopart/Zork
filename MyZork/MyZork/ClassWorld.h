#include "ClassRoom.h"
#include "ClassExit.h"
#include "ClassPlayer.h"
#include "ClassCommand.h"
#include <vector>

class World
{
private:
	Room rooms[5];
	Exit exits[4];
	
public:
	World();
	~World();
};