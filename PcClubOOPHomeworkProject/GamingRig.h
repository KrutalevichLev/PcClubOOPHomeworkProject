#include "logic.h"

class GamingRig {
public:
	int ramGb;
	int powerSupplyUnit;
	int priceHour;
	int gameCount;
	string stationId;
	string cpuModel;
	string gpuModel;
	string* games;

	//default constructor

	GamingRig() {
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

	GamingRig(int rg, int psu, int ph, string id, string cm, string gm) {
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

	GamingRig(string id, int ph) {
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

	GamingRig(const GamingRig& gr) {
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

	~GamingRig() {
		if (games != NULL) {
			delete[] games;
		}
	}

	//enter games

	void setGames() {
		cout << "Enter games count: ";
		cin >> gameCount;
		if (gameCount > 0) {
			games = new string[gameCount];
			cin.ignore();
			for (int i = 0; i < gameCount; i++) {
				cout << "Game name number " << i + 1 << ": ";
				getline(cin, games[i]);
			}
		}
		else {
			games = NULL;
		}
	}

	//output information

	string toString() {
		string msg = "\n#ID: " + stationId + "\n";
		msg += "#gb in ram: " + to_string(ramGb) + "\n";
		msg += "#power supply unit: " + to_string(powerSupplyUnit) + "\n";
		msg += "#model of cpu: " + cpuModel + "\n";
		msg += "#model of gpu: " + gpuModel + "\n";
		msg += "#price per hour: " + to_string(priceHour) + "\n";

		if (gameCount > 0) {
			msg += "#count of games: " + to_string(gameCount) + "\n";
			msg += "#games: \n";
			for (int i = 0; i < gameCount; i++)
			{
				msg += " " +  to_string(i + 1) + "." + games[i] + "\n";
			}
		}

		return msg;
	}

};