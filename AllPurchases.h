#ifndef ALLPURCHASES_H
#define ALLPURCHASES_H

#include <iostream>


class Purchase {

private:
	int ID;
	std::string Item;
	std::string Date;
	int Amount;
public:
	Purchase(int id, std::string item, std::string date, int amount)
	{
		ID = id;
		Item = item;
		Date = date;
		Amount = amount;
	}

	//Getters
	int GetID() { return ID; }
	std::string GetItem() { return Item; }
	std::string GetDate() { return Date; }
	int GetAmount() { return Amount; }
	//Setters
	void SetID(int id) { ID = id; }
	void SetItem(std::string item) { Item = item; }
	void SetDate(std::string date) { Date = date; }
	void SetAmount(int amount) { Amount = amount; }
			
};

#endif // !ALLPURCHASES_H

