#include "ComputerRoom.h"

//default constructor

ComputerRoom::ComputerRoom() : ComputerRoom("") {

}

//constructor with 2 arguments

ComputerRoom::ComputerRoom(string id) : ComputerRoom(id, nullptr, 0) {

}

//constructor with arguments

ComputerRoom::ComputerRoom(string id, GamingRig** list, int size) {
	this->id = id;
	this->size = size;

	if (size > 0) {
		this->list = new GamingRig * [size];
		for (int i = 0; i < size; i++) {
			this->list[i] = new GamingRig(*list[i]);
		}
	}
	else {
		this->list = NULL;
	}
}

//copy constructor

ComputerRoom::ComputerRoom(const ComputerRoom& computerRoom) : ComputerRoom(computerRoom.id) {
	size = computerRoom.size;

	if (size > 0) {
		list = new GamingRig * [size];
		for (int i = 0; i < size; i++) {
			list[i] = new GamingRig(*computerRoom.list[i]);
		}
	}
	else {
		list = nullptr;
	}
}

//destructor

ComputerRoom::~ComputerRoom() {
	if (list != nullptr) {
		for (int i = 0; i < size; i++)
		{
			delete list[i];
		}
		delete[] list;
	}
}

//get

int ComputerRoom::getSize() {
	return size;
}

string ComputerRoom::getId() {
	return id;
}

GamingRig* ComputerRoom::getGamingRig(int index) {
	if (size != 0 && index >= 0 && index < size) {
		return list[index];
	}

	return nullptr;
}

//set

void ComputerRoom::setId(string id) {
	this->id = id;
}

//add

void ComputerRoom::addGamingRig(GamingRig* gamingRig) {
	if (list != nullptr) {
		GamingRig** temp = new GamingRig * [size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = gamingRig;

		delete[] list;

		list = temp;
		size++;
	}
	else {
		list = new GamingRig * [1];
		size = 1;
		list[0] = gamingRig;
	}
}

//remove

void ComputerRoom::removeGamingRig(int index) {
	if (list != nullptr && index >= 0 && index < size) {
		GamingRig** temp = new GamingRig * [size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}

		delete list[index];
		delete[] list;
		list = temp;
		size--;
	}
}

//output information

string ComputerRoom::toString() {
	string msg = "Gaming room with id " + id;

	if (size > 0)
	{

		for (int i = 0; i < size; i++)
		{
			msg += "\n" + to_string(i) + "." + list[i]->toString();
		}

	}else{

		msg += "No gaming rig";

	}
	
	return msg;
}