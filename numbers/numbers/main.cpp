//eliska odd
//rob even

#include <iostream>

int main()
{
	int inputNumber = 0;

	std::cout << "WHAT IS YOUR NUMBER, HOOMAN?!" << std::endl;
	std::cin >> inputNumber;

	if (inputNumber % 2 == 0) // Use modulo to find if number is even or odd.
	{
		std::cout << "YOUR NUMBER IS EVEN! EVENNNNNN!" << std::endl;
	}

	system("pause");
	return 1;
}