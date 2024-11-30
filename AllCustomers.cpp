#include "AllCustomers.h"
#include <iomanip>
#include <iostream>
#include <vector>

int Customer::NewId = 0;

void Customer::PrintCustomer()
{
    std::cout << "+-------------------------+" << std::endl;
    std::cout << "|       " << FirstName << " " << LastName << "          |" << std::endl;
    std::cout << "+----------+--------------+" << std::endl;
    std::cout << "| AccountID|      " << AccountID << "       |" << std::endl;
    std::cout << "| Phone    | " << PhoneNumber << std::setw(4) <<"|" << std::endl;
    std::cout << "+----------+--------------+" << std::endl;
    std::cout << "| Address:                |" << std::endl;
    std::cout << "| " << StreetAddress << std::setw(12) << " |" << std::endl;
    std::cout << "| " << City << "," << std::setw(11) << "<= City|" << std::endl
              << "| " << State << "," << std::setw(16) << "<= State|" << std::endl
              << "| " << ZipCode << "," << std::setw(19) << "<= Zip Code|" << std::endl;
    std::cout << "+-------------------------+" << std::endl;
}

void Customer::PrintAllCustomers(std::vector <Customer> Customers)
{
    int UserChoice{};
    std::cout << "Do you want to Sort in Ascending or Descending order?\n";
    std::cout << "1. Ascending Order\n2.Descending Order\n ";
    std::cin >> UserChoice;
    switch (UserChoice)
    {
    case 1:
        for (std::size_t i = 0; i < Customers.size(); i++)
        {
            Customers[i].PrintCustomer();
        }
        break;
    case 2:
        for (int j = Customers.size() - 1; j != -1 ; j--)
        {
            if (j == 0)
            {
                Customers[j].PrintCustomer();
                break;
            }
            Customers[j].PrintCustomer();
            
        }
        break;
    default:
        std::cout << "Error: Invild Input\n\n";
        break;
    }
    
}

void Customer::PrintSpecificCustomer(std::vector <Customer> Customers, std::vector <Purchase> Purchases)
{
    int UserChoice{};
    std::string FirstName{};
    std::string LastName{};
    int AcountID{};
    std::string PhoneNumber{};

    std::cout << "Customer Look Up\n"
        << "----------------\n"
        << "|1.Name\n"
        << "|2.Account ID\n"
        << "|3.PhoneNumber\n"
        << "________________\n"
        << "Pick a option to look up an Account: ";
    std::cin >> UserChoice;

    switch (UserChoice)
    {
    case 1:
        //add name look up
        std::cout << "First Name: ";
        std::cin >> FirstName;
        std::cout << "Last Name: ";
        std::cin >> LastName;
        for (size_t i = 0; i < Customers.size(); i++)
        {
            if (FirstName == Customers[i].GetFirstName() || LastName == Customers[i].GetLastName())
            {
                Customers[i].PrintCustomer();
            }
        }
        
        break;
    case 2:
        //add Account ID look up
        std::cout << "Enter Account ID: ";
        std::cin >> AccountID;
        
        for (size_t i = 0; i < Customers.size(); i++)
        {
            if (AccountID == Customers[i].GetAccountID())
            {
                Customers[i].PrintCustomer();
            }
        }
        break;
    case 3:
        //add PhoneNumber look 
        std::cout << "Enter Phone Number: ";
        std::cin >> PhoneNumber;
        for (size_t i = 0; i < Customers.size(); i++)
        {
            if (PhoneNumber == Customers[i].GetPhoneNumber())
            {
                Customers[i].PrintCustomer();
            }
        }
        break;
    default:
        break;
    }
}
