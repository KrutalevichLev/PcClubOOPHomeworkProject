#include "GamingRig.h"

//default constructor

GamingRig::GamingRig() : GamingRig(8, 450, 10, "0", "No model of cpu", "No model of gpu") {

}

//constructor with arguments

GamingRig::GamingRig(int ramGb, int powerSupplyUnit, int priceHour, string stationId, string cpuModel, string gpuModel) {
	this->ramGb = ramGb;
	this->powerSupplyUnit = powerSupplyUnit;
	this->priceHour = priceHour;
	this->stationId = stationId;
	gameCount = 0;
	this->cpuModel = cpuModel;
	this->gpuModel = gpuModel;
	games = nullptr;
}

//constructor with 2 arguments

GamingRig::GamingRig(string stationId, int priceHour) : GamingRig() {
	this->priceHour = priceHour;
	this->stationId = stationId;
}

//copy constructor

GamingRig::GamingRig(const GamingRig& gr) : GamingRig(gr.ramGb, gr.powerSupplyUnit, gr.priceHour, gr.stationId, gr.cpuModel, gr.gpuModel){
	gameCount = gr.gameCount;

	if (gameCount > 0) {
		games = new string[gameCount];
		for (int i = 0; i < gameCount; i++) {
			games[i] = gr.games[i];
		}
	}
	else {
		games = nullptr;
	}
}

//destructor

GamingRig::~GamingRig() {
	if (games != NULL) {
		delete[] games;
	}
}

//set

void GamingRig::setRamGb(int ramGb) {
	if (ramGb >= 8 && ramGb <= 64)
	{
		this->ramGb = ramGb;
	}
}

void GamingRig::setID(string stationId) {
	this->stationId = stationId;
}

void GamingRig::setPowerSupplyUnit(int powerSupplyUnit) {
	if (powerSupplyUnit >= 450)
	{
		this->powerSupplyUnit = powerSupplyUnit;
	}
}

void GamingRig::setPriceHour(int priceHour) {
	if (priceHour >= 10) {
		this->priceHour = priceHour;
	}
}

void GamingRig::setCpuModel(string cpuModel) {
	this->cpuModel = cpuModel;
}

void GamingRig::setGpuModel(string gpuModel) {
	this->gpuModel = gpuModel;
}

void GamingRig::setGames(string* games, int gameCount) {

	delete[] this->games;
	this->games = new string[gameCount];

	for (int i = 0; i < gameCount; i++)
	{
		this->games[i] = games[i];
	}

	this->gameCount = gameCount;

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