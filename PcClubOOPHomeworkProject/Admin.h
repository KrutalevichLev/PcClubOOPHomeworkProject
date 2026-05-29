#include "ComputerRoom.h"
#include "ClientAccount.h"

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

};

