#include "logic.h"

class GamingRig {
public:
	int ram_gb;
	int power_supply_unit;
	int price_hour;
	int game_count;
	string station_id;
	string cpu_model;
	string gpu_model;
	string* games;

	//default constructor

	GamingRig() {
		ram_gb = 0;
		power_supply_unit = 0;
		price_hour = 0;
		game_count = 0;
		station_id = "0";
		cpu_model = "No model";
		gpu_model = "No model";
		games = NULL;
	}

	//constructor with arguments

	GamingRig(int rg, int psu, int ph, string id, string cm, string gm) {
		ram_gb = rg;
		power_supply_unit = psu;
		price_hour = ph;
		station_id = id;
		game_count = 0;
		cpu_model = cm;
		gpu_model = gm;
		games = NULL;
	}

	//constructor with 2 arguments

	GamingRig(string id, int ph) {
		ram_gb = 0;
		power_supply_unit = 0;
		price_hour = ph;
		station_id = id;
		game_count = 0;
		cpu_model = "No model";
		gpu_model = "No model";
		games = NULL;
	}

	//copy constructor

	GamingRig(const GamingRig& gr) {
		ram_gb = gr.ram_gb;
		power_supply_unit = gr.power_supply_unit;
		price_hour = gr.price_hour;
		game_count = gr.game_count;
		station_id = gr.station_id;
		cpu_model = gr.cpu_model;
		gpu_model = gr.gpu_model;

		if (game_count > 0) {
			games = new string[game_count];
			for (int i = 0; i < game_count; i++) {
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

	void inputGames() {
		cout << "Enter games count: ";
		cin >> game_count;
		if (game_count > 0) {
			games = new string[game_count];
			cin.ignore();
			for (int i = 0; i < game_count; i++) {
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
		string msg = "\n#ID: " + station_id + "\n";
		msg += "#gb in ram: " + to_string(ram_gb) + "\n";
		msg += "#power supply unit: " + to_string(power_supply_unit) + "\n";
		msg += "#model of cpu: " + cpu_model + "\n";
		msg += "#model of gpu: " + gpu_model + "\n";
		msg += "#price per hour: " + to_string(price_hour) + "\n";

		if (game_count > 0) {
			msg += "#count of games: " + to_string(game_count) + "\n";
			msg += "#games: \n";
			for (int i = 0; i < game_count; i++)
			{
				msg += " " +  to_string(i + 1) + "." + games[i] + "\n";
			}
		}

		return msg;
	}

};