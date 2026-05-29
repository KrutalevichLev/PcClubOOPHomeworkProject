#include "Admin.h"

double Admin::calculateAveragePrice(ComputerRoom* computerRoom) {
	if (computerRoom != nullptr) {

		int size = computerRoom->getSize();

		if (size > 0)
		{
			double sum = 0;

			for (int i = 0; i < size; i++)
			{
				GamingRig* gamingRig = computerRoom->getGamingRig(i);
				sum += gamingRig->getPriceHour();
			}

			return sum / size;
		}
	}

	return -1;
}

double Admin::findMinPrice(ComputerRoom* computerRoom) {
	if (computerRoom != nullptr) {

		int size = computerRoom->getSize();

		if (size > 0)
		{
			GamingRig* gamingRig = computerRoom->getGamingRig(0);
			double min = gamingRig->getPriceHour();

			for (int i = 1; i < size; i++)
			{
				GamingRig* gamingRig = computerRoom->getGamingRig(i);
				double temp = gamingRig->getPriceHour();

				if (min > temp) {
					min = gamingRig->getPriceHour();
				}

			}

			return min;
		}
	}

	return -1;
}

double Admin::findMaxPrice(ComputerRoom* computerRoom) {
	if (computerRoom != nullptr) {

		int size = computerRoom->getSize();

		if (size > 0)
		{
			GamingRig* gamingRig = computerRoom->getGamingRig(0);
			double max = gamingRig->getPriceHour();

			for (int i = 1; i < size; i++)
			{
				GamingRig* gamingRig = computerRoom->getGamingRig(i);
				double temp = gamingRig->getPriceHour();

				if (max < temp) {
					max = gamingRig->getPriceHour();
				}

			}

			return max;
		}
	}

	return -1;
}

int Admin::findIndexOfGamingRigWithMinPrice(ComputerRoom* computerRoom) {
	if (computerRoom != nullptr) {

		int size = computerRoom->getSize();

		if (size > 0)
		{
			GamingRig* gamingRig = computerRoom->getGamingRig(0);
			double min = gamingRig->getPriceHour();
			int min_index = 0;

			for (int i = 1; i < size; i++)
			{
				GamingRig* gamingRig = computerRoom->getGamingRig(i);
				double temp = gamingRig->getPriceHour();

				if (min > temp) {
					min_index = i;
					min = temp;
				}

			}

			return min_index;
		}
	}

	return -1;
}

int Admin::findIndexOfGamingRigWithMaxPrice(ComputerRoom* computerRoom) {
	if (computerRoom != nullptr) {

		int size = computerRoom->getSize();

		if (size > 0)
		{
			GamingRig* gamingRig = computerRoom->getGamingRig(0);
			double max = gamingRig->getPriceHour();
			int max_index = 0;

			for (int i = 1; i < size; i++)
			{
				GamingRig* gamingRig = computerRoom->getGamingRig(i);
				double temp = gamingRig->getPriceHour();

				if (max < temp) {
					max_index = i;
					max = temp;
				}

			}

			return max_index;
		}
	}

	return -1;
}

int Admin::findEarningsOverTime(ComputerRoom* computerRoom, int time) {
	if (computerRoom != nullptr) {

		int size = computerRoom->getSize();

		if (size > 0)
		{
			GamingRig* gamingRig = computerRoom->getGamingRig(0);
			int per_hour = gamingRig->getPriceHour();

			for (int i = 1; i < size; i++)
			{
				GamingRig* gamingRig = computerRoom->getGamingRig(i);
				per_hour += gamingRig->getPriceHour();

			}

			return per_hour * time;
		}
	}

	return -1;
}

int Admin::FindHowMuchClientPlayOnGamingRig(ComputerRoom* computerRoom, int indexOfGamingRig, AccountGroup* accountGroup, int indexOfClientAccount) {
	if (computerRoom != nullptr) {

			int balance = accountGroup->getAccount(indexOfClientAccount)->getBalance();
			int price = computerRoom->getGamingRig(indexOfGamingRig)->getPriceHour();

			if (balance >= price) {
				return balance / price;
		}
	}

	return -1;
}

bool Admin::canClientPlayOnGamingRig(ComputerRoom* computerRoom, int indexOfGamingRig, AccountGroup* accountGroup, int indexOfClientAccount) {
	if (computerRoom != nullptr) {

			int price = accountGroup->getAccount(indexOfClientAccount)->getBalance();
			int balance = computerRoom->getGamingRig(indexOfGamingRig)->getPriceHour();

			if (balance >= price) {
				return true;
			}
	}

	return false;
}