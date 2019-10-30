#include <iostream>
#include "Item.h"
#include "Customer.h"
#include <list>

void StartGame()
{
	std::list<Item>boughtPersonas;
	std::list<Item>personasToBuy;

	personasToBuy.push_back(Item("BudgetArsene", 100, "Chariot"));
	personasToBuy.push_back(Item("Arsene", 840, "Fool"));
	
	Customer Job(8200);

	while (true)
	{
		bool productFound = false;

		std::cout << "You Have: " << Job.GetMoney() << " Money\nPlease Enter The Name Of The Item You Wish To Buy\n\nCart(This Shows What You've Bought)\nMake(Make a new Persona)\n\n";

		for (Item it : personasToBuy)
		{
			std::cout << it.GetName() << ", " << it.GetArcana() << ", " << it.GetCost() << " money\n";
		}
		
		std::string input;

		std::cin >> input;

		std::cout << "\n";

		for (Item it : personasToBuy)
		{
			if (it.GetName() == input)
			{
				if (Job.GetMoney() >= it.GetCost())
				{
					Job.SetMoney(Job.GetMoney() - it.GetCost());
					boughtPersonas.push_back(it);
					std::cout << "You Bought " << it.GetName() << "\n";					
				}
				else
				{
					std::cout << "You Don't Have Enough Money\n";
					break;
				}
				productFound = true;
			}
		}

		if (input == "Cart")
		{
			for (Item it : boughtPersonas)
			{
				std::cout << it.GetName() << ", " << it.GetArcana() << ", " << it.GetCost() << " money\n";
				productFound = true;
			}
		}
		else if (input == "Make")
		{
			std::string name;
			int cost;
			std::string arcana;
			std::cout << "Type Name:\n";
			std::cin >> name;
			std::cout << "Type Cost:\n";
			std::cin >> cost;
			std::cout << "Type Arcana:\n";
			std::cin >> arcana;

			personasToBuy.push_back(Item(name, cost, arcana));

			std::cout << "You made a new Persona!\n";
		}

		if (!productFound)
		{
			std::cout << "Please Check Your Spelling\n";
		}

		std::cout << "\n";
	}
}

int main()
{
	StartGame();
}

