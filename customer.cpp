/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#include <iostream>
#include <string>
#include "customer.h"
using namespace std;

	Customer :: Customer(){
		order2taken = false;
		cout<<"Enter Customer Name : ";
		cin>>custName;
		cout<<"Enter Customer Age : ";
		cin>>age;
		cout<<"Enter Customer Phone Number : ";
		cin>>custPhoneNo;
		
	}
	void Customer :: setCustomerOrders(){
		o[0].setOrder();
		cout<<endl;
		bool anotherCheck = false;
		cout<<"Enter 1 for another order"<<endl;
		cin>>anotherCheck;
		if(anotherCheck == true){
			o[1].setOrder();
			order2taken = true;
		}
	}
	void Customer :: displayCustomerOrders(){
		o[0].displayOrderDetail();
		if(order2taken == true){
			o[1].displayOrderDetail();
		}
		cout<<"Enter any letter to continue..."<<endl;
		char ch;
		cin>>ch;
		system("clear");
	}
