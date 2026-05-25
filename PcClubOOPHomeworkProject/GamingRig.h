#include "logic.h"

class GamingRig {
private:
	int ramGb;
	int powerSupplyUnit;
	int priceHour;
	int gameCount;
	string stationId;
	string cpuModel;
	string gpuModel;
	string* games;

public:
	//default constructor

	GamingRig();

	//constructor with arguments

	GamingRig(int rg, int psu, int ph, string id, string cm, string gm);

	//constructor with 2 arguments

	GamingRig(string id, int ph);

	//copy constructor

	GamingRig(const GamingRig& gr);

	//destructor

	~GamingRig();

	//set

	void setRamGb(int gb);

	void setPowerSupplyUnit(int gb);

	void setPriceHour(int ph);

	void setID(string id);

	void setCpuModel(string cpm);

	void setGpuModel(string gpm);

	void setGames(string*);

	void setGames(string* ms, int c);


	//get

	int getRamGb();

	int getPowerSupplyUnit();

	int getPriceHour();

	int getGameCount();

	string getID();

	string getCpuModel();

	string getGpuModel();

	string* getGames();

	//enter

	void enterGames();

	//output information

	string toString();

};