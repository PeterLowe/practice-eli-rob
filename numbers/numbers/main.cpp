//eliska odd
//rob even

#include <iostream>

int main()
{

	int number = 6;
	//user input
	std::cout << "NUMBERRRR, NOOOOW!!!" << std::endl;
	std::cin >> number;

	if (number %2 == 1) {
		std::cout << "THE NUMBER IS ODD, MY FRIENDDDD!" << std::endl;
	}
	else
	{
		std::cout << "YOUR NUMBER IS EVEN! EVENNNNNN!" << std::endl;
	}

	system("pause");
	return 1;
}