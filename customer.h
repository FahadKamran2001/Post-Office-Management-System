/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
#include "address.h"
#include "order.h"
using namespace std;

class Customer{
protected:
	Order o[2];
	string custName;
	int age;
	long int custPhoneNo;
	bool order2taken;
public:
	Customer();
	void setCustomerOrders();
	void displayCustomerOrders();


};
#endif
