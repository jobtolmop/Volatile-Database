#include "Item.h"

Item::Item(std::string aName, int aCost, std::string aArcana)
{
	name = aName;
	cost = aCost;
	arcana = aArcana;
}

Item::~Item()
{

}

int Item::GetCost()
{
	return cost;
}

std::string Item::GetName()
{
	return name;
}

std::string Item::GetArcana()
{
	return arcana;
}
