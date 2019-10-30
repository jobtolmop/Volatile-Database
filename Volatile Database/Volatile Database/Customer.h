#pragma once
class Customer
{
public: 

	Customer(int someMoney);
	~Customer();

	void SetMoney(int someMoney);
	int GetMoney();

private:

	int money;

};

