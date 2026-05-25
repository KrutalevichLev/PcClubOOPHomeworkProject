#include "GamingRig.h"

int main() {
	int ram_gb,power_supply_unit,price_hour,game_count;
	string station_id, cpu_model, gpu_model;
	string* games;

	GamingRig gaming_rig1;


	cout << "Enter id of rig: ";
	cin >> station_id;
	gaming_rig1.setID(station_id);

	cout << "Enter how much gb in ram: ";
	cin >> ram_gb;
	gaming_rig1.setRamGb(ram_gb);

	cout << "Enter power of supply unit: ";
	cin >> power_supply_unit;
	gaming_rig1.setPowerSupplyUnit(power_supply_unit);

	cin.ignore();

	cout << "Enter cpu: ";
	getline(cin, cpu_model);
	gaming_rig1.setCpuModel(cpu_model);


	cout << "Enter gpu: ";
	getline(cin, gpu_model);
	gaming_rig1.setGpuModel(gpu_model);

	cout << "Enter price per hour: ";
	cin >> price_hour;
	gaming_rig1.setPriceHour(price_hour);

	gaming_rig1.enterGames();

	cout << "\nInfo about your gaming rig:" << endl;

	cout << gaming_rig1.toString();

	return 0;
}