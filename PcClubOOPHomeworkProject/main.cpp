#include "Admin.h"

int main() {
	//int ram_gb,power_supply_unit,price_hour,game_count;
	//string station_id, cpu_model, gpu_model;
	//string* games;
	//
	//GamingRig gaming_rig1;
	//
	//
	//cout << "Enter id of rig: ";
	//cin >> station_id;
	//gaming_rig1.setID(station_id);
	//
	//cout << "Enter how much gb in ram: ";
	//cin >> ram_gb;
	//gaming_rig1.setRamGb(ram_gb);
	//
	//cout << "Enter power of supply unit: ";
	//cin >> power_supply_unit;
	//gaming_rig1.setPowerSupplyUnit(power_supply_unit);
	//
	//cin.ignore();
	//
	//cout << "Enter cpu: ";
	//getline(cin, cpu_model);
	//gaming_rig1.setCpuModel(cpu_model);
	//
	//
	//cout << "Enter gpu: ";
	//getline(cin, gpu_model);
	//gaming_rig1.setGpuModel(gpu_model);
	//
	//cout << "Enter price per hour: ";
	//cin >> price_hour;
	//gaming_rig1.setPriceHour(price_hour);
	//
	//cout << "Enter games count: ";
	//cin >> game_count;
	//
	//if (game_count > 0) {
	//	games = new string[game_count];
	//	cin.ignore();
	//	for (int i = 0; i < game_count; i++) {
	//		cout << "Game name number " << i + 1 << ": ";
	//		getline(cin, games[i]);
	//	}
	//}
	//else {
	//	games = NULL;
	//}
	//
	//gaming_rig1.setGames(games, game_count);
	//
	//delete[] games;
	//
	//cout << "\nInfo about your gaming rig:" << endl;
	//
	//string msg = gaming_rig1.toString();
	//
	//cout << msg;
	//

	GamingRig gaming_rig1(8, 450, 10, "fds", "dff", "efd");
	GamingRig gaming_rig2(8, 450, 20, "fds", "dff", "efd");
	GamingRig gaming_rig3(8, 450, 30, "fds", "dff", "efd");
	GamingRig gaming_rig4(8, 450, 60, "fds", "dff", "efd");
	GamingRig gaming_rig5(8, 450, 30, "fds", "dff", "efd");

	Admin admin;

	ComputerRoom cr("2321");

	cr.addGamingRig(&gaming_rig1);

	cr.addGamingRig(&gaming_rig2);

	cr.addGamingRig(&gaming_rig3);

	cr.addGamingRig(&gaming_rig4);

	cr.addGamingRig(&gaming_rig5);
	
	cout << admin.calculateAveragePrice(&cr) << endl 
		<< admin.findMinPrice(&cr) << endl 
		<< admin.findMaxPrice(&cr) << endl 
		<< admin.findIndexOfGamingRigWithMinPrice(&cr) << endl 
		<< admin.findIndexOfGamingRigWithMaxPrice(&cr) << endl 
		<< cr.toString();

	return 0;
}