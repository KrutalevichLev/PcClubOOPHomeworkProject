#include "ClientAccount.h"

class AccountGroup
{
private:
	ClientAccount** list;
	int size;

public:
	//default constructor

	AccountGroup();

	//constructor with arguments

	AccountGroup(ClientAccount** list, int size);

	//copy constructor

	AccountGroup(const AccountGroup& computerRoom);

	//destructor

	~AccountGroup();

	//get

	int getSize();

	ClientAccount* getAccount(int index);

	//add

	void addAccount(ClientAccount* gamingRig);

	//remove

	void removeAccount(int index);

	//output information

	string toString();
};

