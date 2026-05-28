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

	return 0;
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

	return 0;
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

	return 0;
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

	return 0;
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

	return 0;
}