#include "Customer.h"

Customer::Customer(int someMoney)
{
	money = someMoney;
}

Customer::~Customer()
{
}

void Customer::SetMoney(int someMoney)
{
	money = someMoney;
}

int Customer::GetMoney()
{
	return money;
}
