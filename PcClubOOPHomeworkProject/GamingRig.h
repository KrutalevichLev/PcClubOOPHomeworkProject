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

	//GamingRig(const GamingRig& student) {
	//	cout << "Student copy-cinstructor//]]..//";
	//	id = student.id;
	//	name = student.name;
	//	age = student.age;
	//	marks = new double[3] {
	//		student.marks[0],
	//			student.marks[1],
	//			student.marks[2]};
	//	class_number = student.class_number;
	//	class_letter = student.class_letter;
	//	alive = student.alive;
	//}

	GamingRig(int rg, int psu, int ph, string id, string cm, string gm) {
		ram_gb = rg;
		power_supply_unit = psu;
		price_hour = ph;
		station_id = id;
		cpu_model = cm;
		gpu_model = gm;
		games = NULL;
	}

	~GamingRig() {
		cout << "Destructor";
		if (games != NULL) {
			delete[] games;
		}
	}

	void inputGames() {
		cout << "Enter games count: ";
		cin >> game_count;
		if (game_count > 0) {
			games = new string[game_count];
			cin.ignore();
			for (int i = 0; i < game_count; i++) {
				cout << "Game name" << i + 1 << ": ";
				getline(cin, games[i]);
			}
		}
		else {
			games = NULL;
		}
	}

	string toString() {
		string msg = "ID: " + station_id + "\n";
		msg += "gb in ram: " + to_string(ram_gb) + "\n";
		msg += "power supply unit: " + to_string(power_supply_unit) + "\n";
		msg += "model of cpu: " + cpu_model + "\n";
		msg += "model of gpu: " + gpu_model + "\n";
		msg += "price per hour: " + to_string(price_hour) + "\n";

		if (game_count > 0) {
			msg += "count of games: " + to_string(game_count) + "\n";
			msg += "games: \n";
			for (int i = 0; i < game_count; i++)
			{
				msg += games[i] + "\n";
			}
		}

		return msg;
	}

};