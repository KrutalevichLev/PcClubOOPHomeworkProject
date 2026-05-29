#include "AccountGroup.h"

//default constructor

AccountGroup::AccountGroup() : AccountGroup(nullptr, 0) {

}

//constructor with arguments

AccountGroup::AccountGroup(ClientAccount** list, int size) {
	this->size = size;

	if (size > 0) {
		this->list = new ClientAccount * [size];
		for (int i = 0; i < size; i++) {
			this->list[i] = new ClientAccount(*list[i]);
		}
	}
	else {
		this->list = nullptr;
		this->size = 0;
	}
}

//copy constructor

AccountGroup::AccountGroup(const AccountGroup& accountGroup) {
	size = accountGroup.size;

	if (size > 0) {
		list = new ClientAccount * [size];
		for (int i = 0; i < size; i++) {
			list[i] = new ClientAccount(*accountGroup.list[i]);
		}
	}
	else {
		list = nullptr;
	}
}

//destructor

AccountGroup::~AccountGroup() {
	if (list != nullptr) {
		for (int i = 0; i < size; i++)
		{
			delete list[i];
		}
		delete[] list;
	}
}

//get

int AccountGroup::getSize() {
	return size;
}

ClientAccount* AccountGroup::getAccount(int index) {
	if (size != 0 && index >= 0 && index < size) {
		return list[index];
	}

	return nullptr;
}

//add

void AccountGroup::addAccount(ClientAccount* clientAccount) {
	if (clientAccount == nullptr) return;

	ClientAccount* newRig = new ClientAccount(*clientAccount);

	if (list != nullptr) {
		ClientAccount** temp = new ClientAccount * [size + 1];
		for (int i = 0; i < size; ++i) {
			temp[i] = list[i];
		}
		temp[size] = newRig;
		delete[] list;
		list = temp;
	}
	else {
		list = new ClientAccount * [1];
		list[0] = newRig;
	}
	size++;
}


//remove

void AccountGroup::removeAccount(int index) {
	if (list != nullptr && index >= 0 && index < size) {
		ClientAccount** temp = new ClientAccount * [size - 1];

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

string AccountGroup::toString() {
	string msg = "Accounts: \n";

	if (size > 0)
	{

		for (int i = 0; i < size; i++)
		{
			msg += "\n" + to_string(i + 1) + "." + "\n" + list[i]->toString();
		}

	}
	else {

		msg += "No accounts";

	}

	return msg;
}
