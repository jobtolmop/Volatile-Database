#pragma once
#include <string>
class Item
{
public:
	
	Item(std::string aName, int aCost, std::string aArcana);
	~Item();

	int GetCost();
	std::string GetName();
	std::string GetArcana();

private:

	std::string name;
	int cost;
	std::string arcana;

};

