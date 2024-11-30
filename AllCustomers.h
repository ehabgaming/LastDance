#ifndef ALLCUSTOMERS_H
#define ALLCUSTOMERS_H

#include <iostream>
#include <vector>
#include "AllPurchases.h"

class Customer
{
private:
	std::string FirstName;
	std::string LastName;
	static int NewId;
	int AccountID;
	std::string StreetAddress;
	std::string City;
	std::string State;
	int ZipCode;
	std::string PhoneNumber;

public:

	Customer(std::string firstname, std::string lastname, std::string streetaddress, std::string city, std::string state, int zipcode, std::string phonenumber)
	{
		
		FirstName = firstname;
		LastName = lastname;
		AccountID = NewId++;
		StreetAddress = streetaddress;
		City = city;
		State = state;
		ZipCode = zipcode;
		PhoneNumber = phonenumber;
	}

	
	//Getters
	std::string GetFirstName() { return FirstName; }
	std::string GetLastName() { return LastName; }
	int GetAccountID() { return AccountID; }
	std::string GetStreetAddress() { return StreetAddress; }
	std::string GetCity() { return City;  }
	std::string GetState() { return State; }
	int GetZipCode() { return ZipCode; }
	std::string GetPhoneNumber() { return PhoneNumber; }

	//Setters
	void SetFirstName(std::string firstname) { FirstName = firstname; }
	void SetLastName(std::string lastname) { LastName = lastname; }
	void SetAccountID(int accountid) { AccountID = accountid; }
	void SetStreetAddress(std::string streetaddress) { StreetAddress = streetaddress; }
	void SetCity(std::string city) { City = city; }
	void SetState(std::string state) { State = state; }
	void SetZipCode(int zipcode) { ZipCode = zipcode; }
	void SetPhoneNumber(std::string phonenumber) { PhoneNumber = phonenumber; }

	void PrintCustomer();
	void PrintAllCustomers(std::vector <Customer>);
	void PrintSpecificCustomer(std::vector <Customer>,std::vector <Purchase>);
	
	
};


#endif // ALLCUSTOMERS_H
