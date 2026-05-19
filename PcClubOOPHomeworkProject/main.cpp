#include "GamingRig.h"

int main() {
	GamingRig gaming_rig1;

	cout << "Enter id of rig: ";
	cin >> gaming_rig1.station_id;

	cout << "Enter how much gb in ram: ";
	cin >> gaming_rig1.ram_gb;

	cout << "Enter power of supply unit: ";
	cin >> gaming_rig1.power_supply_unit;

	cout << "Enter cpu: ";
	cin >> gaming_rig1.cpu_model;

	cout << "Enter gpu: ";
	cin >> gaming_rig1.gpu_model;

	cout << "Enter price per hour: ";
	cin >> gaming_rig1.price_hour;

	cout << "\nInfo about your gaming rig:" << endl;

	cout << gaming_rig1.toString();

	return 0;
}