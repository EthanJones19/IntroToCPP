#include <iostream>

int main()
{
	//This is the same as "Console.Write();"
	int num = 3;
	std::cout << num << std::endl;

	std::cin >> num;

	std::cout << num << std::endl;

	system("pause");
	return 1;

}