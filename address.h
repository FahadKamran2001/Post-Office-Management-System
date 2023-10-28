/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
#include <string>
using namespace std;

class Address{
protected:
	string city;
	string country;
	string street;
	string houseNo;
public:
	//constructors
	Address();
	//functions for use
	void setAddress();
	void displayAddress();
	string lowerString(string str);
	//getters and setters
	string getCity();
	string getCountry();
	string getStreet();
	string getHouseNo();
	void setCity(string c);
	void setCountry(string c);
	void setStreet(string s);
	void setHouseNo(string h);
	
	

	



};
#endif
