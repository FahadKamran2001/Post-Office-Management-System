/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include <string>
#include "address.h"
#include "dimension.h"
using namespace std;

class Order{
protected:
	Address custAdd;
	int parcelID;
	Address deliveryAdd;
	string urgency;	//same-day for local vicinity and one-day for neighbour cities and none for no urgency
	int weight;
	Dimension dimensions;
	long int recieverPhoneNo;
	
public:
	Order();
	void setOrder();
	void displayOrderDetail();


};
#endif
