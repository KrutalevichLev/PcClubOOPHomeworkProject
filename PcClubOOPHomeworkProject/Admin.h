#include "ComputerRoom.h"

class Admin
{ 
public:
	//find index

	int findIndexOfGamingRigWithMinPrice(ComputerRoom* computerRoom);

	int findIndexOfGamingRigWithMaxPrice(ComputerRoom* computerRoom);

	//find value 

	double calculateAveragePrice(ComputerRoom* computerRoom);

	double findMinPrice(ComputerRoom* computerRoom);

	double findMaxPrice(ComputerRoom* computerRoom);

	int findEarningsOverTime(ComputerRoom* computerRoom, int time);

	int FindHowMuchClientPlayOnGamingRig(ComputerRoom* computerRoom, int indexOfGamingRig, AccountGroup* accountGroup, int indexOfClientAccount);

	//bool

	bool canClientPlayOnGamingRig(ComputerRoom* computerRoom, int indexOfGamingRig, AccountGroup* accountGroup, int indexOfClientAccount);


};

