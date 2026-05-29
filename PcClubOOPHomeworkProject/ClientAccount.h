#include "logic.h"

class ClientAccount
{
private:
	string name;
	double balance;
public:
	//default constructor

	ClientAccount();

	//constructor with arguments

	ClientAccount(string name, int balance);

	//constructor 1 argument

	ClientAccount(string name);

	//copy constructor

	ClientAccount(const ClientAccount& clientAccount);

	//gets

	string getName();

	int getBalance();

	//sets

	void setName(string name);

	void setBalance(double balance);

	//output information

	string toString();
};
