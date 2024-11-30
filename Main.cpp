#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <vector>
#include <cstdlib>
#include "AllCustomers.h"
#include "AllPurchases.h"

using namespace std;

void CleanConsole()
{
	cout << "Press any button...";
	cin.get();
	cin.get();
	system("cls");	
}

void DisplayMassage()
{
	cout << "Welcome to Ebay 2.0\n";
	cout << "-------------------\n";
	cout << "1.PrintAllCustomers\n"
		<< "2.PrintSpecificCustomer\n"
		<< "Enter a Number: ";
}

int main()
{
	vector <Customer> Customers;
	vector <Purchase> Purchases;
	Customer test("John", "Doe", "123 house ave", "New York City", "New York", 10301, "3478456872");
	Customer test1("John", "Doe", "123 house ave", "New York City", "New York", 10301, "3478456872");
	
	
	Customers.push_back(test);
	Customers.push_back(test1);

	
	int UserChoice{};
		
	
	while (UserChoice != 11)
	{
		DisplayMassage();
		cin >> UserChoice;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invild Input\n";
			CleanConsole();
		}

		switch (UserChoice)
		{
		case 1: 
			test.PrintAllCustomers(Customers);
			CleanConsole();
			break;
		case 2:
			test.PrintSpecificCustomer(Customers);
			CleanConsole();
			break;
		case 11:
			cout << "THANKS FOR USING MY PROJECT!!!!! :D";
		default:
			break;
		}
		
	}
	return 0;
}
