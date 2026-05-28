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

	GamingRig(int ramGb, int powerSupplyUnit, int priceHour, string stationId, string cpuModel, string gpuModel);

	//constructor with 2 arguments

	GamingRig(string stationId, int priceHour);

	//copy constructor

	GamingRig(const GamingRig& gr);

	//destructor

	~GamingRig();

	//set

	void setRamGb(int ramGb);

	void setID(string stationId);

	void setPowerSupplyUnit(int powerSupplyUnit);

	void setPriceHour(int priceHour);

	void setCpuModel(string cpuModel);

	void setGpuModel(string gpuModel);

	void setGames(string* games, int gameCount);

	//get

	string getID();

	int getRamGb();

	int getPowerSupplyUnit();

	int getPriceHour();

	int getGameCount();

	string getCpuModel();

	string getGpuModel();

	string* getGames();

	//output information

	string toString();

};