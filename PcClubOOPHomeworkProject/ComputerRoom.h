#include "GamingRig.h"

class ComputerRoom
{
private:
	string id;
	GamingRig** list;
	int size;

public:
	//default constructor

	ComputerRoom();

	//constructor with 2 arguments

	ComputerRoom(string id);
	
	//constructor with arguments

	ComputerRoom(string id, GamingRig** list, int size);

	//copy constructor

	ComputerRoom(const ComputerRoom& computerRoom);

	//destructor

	~ComputerRoom();

	//get

	int getSize();

	string getId();

	GamingRig* getGamingRig(int index);

	//set

	void setId(string id);

	//add

	void addGamingRig(GamingRig* gamingRig);

	//remove

	void removeGamingRig(int index);

	//output information

	string toString();
};

