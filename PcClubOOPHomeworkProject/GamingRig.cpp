#include "GamingRig.h"

//default constructor

GamingRig::GamingRig() {
	ramGb = 0;
	powerSupplyUnit = 0;
	priceHour = 0;
	gameCount = 0;
	stationId = "0";
	cpuModel = "No model";
	gpuModel = "No model";
	games = NULL;
}

//constructor with arguments

GamingRig::GamingRig(int rg, int psu, int ph, string id, string cm, string gm) {
	ramGb = rg;
	powerSupplyUnit = psu;
	priceHour = ph;
	stationId = id;
	gameCount = 0;
	cpuModel = cm;
	gpuModel = gm;
	games = NULL;
}

//constructor with 2 arguments

GamingRig::GamingRig(string id, int ph) {
	ramGb = 0;
	powerSupplyUnit = 0;
	priceHour = ph;
	stationId = id;
	gameCount = 0;
	cpuModel = "No model";
	gpuModel = "No model";
	games = NULL;
}

//copy constructor

GamingRig::GamingRig(const GamingRig& gr) {
	ramGb = gr.ramGb;
	powerSupplyUnit = gr.powerSupplyUnit;
	priceHour = gr.priceHour;
	gameCount = gr.gameCount;
	stationId = gr.stationId;
	cpuModel = gr.cpuModel;
	gpuModel = gr.gpuModel;

	if (gameCount > 0) {
		games = new string[gameCount];
		for (int i = 0; i < gameCount; i++) {
			games[i] = gr.games[i];
		}
	}
	else {
		games = NULL;
	}
}

//destructor

GamingRig::~GamingRig() {
	if (games != NULL) {
		delete[] games;
	}
}

//set

void GamingRig::setGameCount(int gc){
	gameCount = gc;
}

void GamingRig::setRamGb(int gb) {
	ramGb = gb;
}

void GamingRig::setID(string id) {
	stationId = id;
}

void GamingRig::setPowerSupplyUnit(int gb) {
	powerSupplyUnit = gb;
}

void GamingRig::setPriceHour(int ph) {
	priceHour = ph;
}

void GamingRig::setCpuModel(string cpm) {
	cpuModel = cpm;
}

void GamingRig::setGpuModel(string gpm) {
	gpuModel = gpm;
}

void GamingRig::setGames(string* ms, int c) {

	delete[] games;
	games = new string[c];

	for (int i = 0; i < c; i++)
	{
		games[i] = ms[i];
	}

	gameCount = c;

}


//get
string GamingRig::getID() {
	return stationId;
}

int GamingRig::getRamGb() {
	return ramGb;
}

int GamingRig::getPowerSupplyUnit() {
	return powerSupplyUnit;
}

int GamingRig::getPriceHour() {
	return priceHour;
}

int GamingRig::getGameCount() {
	return gameCount;
}

string GamingRig::getCpuModel() {
	return cpuModel;
}

string GamingRig::getGpuModel() {
	return gpuModel;
}

string* GamingRig::getGames() {
	return games;
}

//output information

string GamingRig::toString() {
	string msg = "\n#ID: " + stationId + "\n";
	msg += "#gb in ram: " + to_string(ramGb) + "\n";
	msg += "#power supply unit: " + to_string(powerSupplyUnit) + "W" + "\n";
	msg += "#model of cpu: " + cpuModel + "\n";
	msg += "#model of gpu: " + gpuModel + "\n";
	msg += "#price per hour: " + to_string(priceHour) + "$" + "\n";

	if (gameCount > 0) {
		msg += "#count of games: " + to_string(gameCount) + "\n";
		msg += "#games: \n";
		for (int i = 0; i < gameCount; i++)
		{
			msg += " " + to_string(i + 1) + "." + games[i] + "\n";
		}
	}

	return msg;
}