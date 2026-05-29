#include "ClientAccount.h"

ClientAccount::ClientAccount() : ClientAccount("No name", 0) {

}

//constructor with arguments

ClientAccount::ClientAccount(string name, int balance) {
	this->name = name;
	this->balance = balance;
}

//constructor 1 argument

ClientAccount::ClientAccount(string name) : ClientAccount(name, 0) {
}

//copy constructor

ClientAccount::ClientAccount(const ClientAccount& clientAccount) : ClientAccount(clientAccount.name, clientAccount.balance) {

}


//gets

string ClientAccount::getName() {
	return name;
}

int ClientAccount::getBalance() {
	return balance;
}

//sets

void ClientAccount::setName(string name) {
	this->name = name;
}

void ClientAccount::setBalance(double balance) {
	if (balance > 0)
	{
		this->balance = balance;
	}
}

//output information

string ClientAccount::toString() {
	string msg = "";

	msg += "name: " + name + "\n";
	msg += "balance: " + to_string(balance);

	return msg;
}