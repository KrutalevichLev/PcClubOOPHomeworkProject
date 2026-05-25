#include "GamingRig.h"

int main() {
	int ram_gb,power_supply_unit,price_hour,game_count;
	string station_id, cpu_model, gpu_model;
	string* games;


	cout << "Enter id of rig: ";
	cin >> station_id;

	cout << "Enter how much gb in ram: ";
	cin >> ram_gb;

	cout << "Enter power of supply unit: ";
	cin >> power_supply_unit;

	cin.ignore();

	cout << "Enter cpu: ";
	getline(cin, cpu_model);


	cout << "Enter gpu: ";
	getline(cin, gpu_model);

	cout << "Enter price per hour: ";
	cin >> price_hour;

	GamingRig gaming_rig1(ram_gb, power_supply_unit, price_hour, station_id, cpu_model, gpu_model);

	gaming_rig1.setGames();

	cout << "\nInfo about your gaming rig:" << endl;

	cout << gaming_rig1.toString();

	GamingRig gaming_rig2(gaming_rig1);

	cout << "\nInfo about your gaming rig:" << endl;

	cout << gaming_rig2.toString();

	return 0;
}