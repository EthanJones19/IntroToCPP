#include <iostream>
#include <fstream>
#include "Character.h"

int main()
{
	Character player = Character();
	player.health = 100;
	player.damage = 5;

	std::fstream file;

	file.open("save.txt", std::ios::out | std::ios::_Nocreate);

	if (!file.is_open())
	{
		return 1;
	}

	file << player.health << std::endl;
	file << player.damage;

	file.close();

	Character player2 = Character();

	file.open("save.txt", std::ios::in);

	if (!file.is_open())
	{
		return 1;
	}

	file >> player2.health;
	file >> player2.damage;

	file.close();

	std::cout << player2.health << std::endl;
	std::cout << player2.damage << std::endl;
	return 0;
}