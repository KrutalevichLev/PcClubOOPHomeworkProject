#include "logic.h"

class GamingRig {
public:
	int station_id;
	int ram_gb;
	int power_supply_unit;
	double price_hour;
	string cpu_model;
	string gpu_model;

	string toString() {
		string msg = "BankAccount:\n";
		msg += "ID: " + to_string(station_id) + "\n";
		msg += "gb in ram: " + to_string(ram_gb) + "\n";
		msg += "power supply unit: " + to_string(power_supply_unit) + "\n";
		msg += "model of cpu: " + cpu_model + "\n";
		msg += "model of gpu: " + gpu_model + "\n";
		msg += "price per hour: " + to_string(price_hour);

		return msg;
	}

};