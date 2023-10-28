/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#include <iostream>
#include <string>
#include "order.h"
using namespace std;

	Order :: Order(){}
	void Order :: setOrder(){
		cout<<"Enter Customer Address"<<endl;
		custAdd.setAddress();
		parcelID = 123;
		cout<<"Delivery Address"<<endl;
		deliveryAdd.setAddress();
		bool urgencyCheck;
		cout<<"Urgent delivery?"<<endl;
		cout<<"Press 1 for yes"<<endl;
		cout<<"Press 0 for no"<<endl;
		cin>>urgencyCheck;
		if((custAdd.getCity() == deliveryAdd.getCity()) && (urgencyCheck == true)){
			urgency = "same-day";
		}
		else if((custAdd.getCountry() == deliveryAdd.getCountry()) && (urgencyCheck == true)){
			urgency = "one-day";
		}
		else{
			cout<<"Urgency cannot be from country to country, Sorry for the inconveniece"<<endl;
			urgency = "none";
		}
		cout<<"Enter weight of package in kg : ";
		cin>>weight;
		cout<<"Enter dimensions of package"<<endl;
		dimensions.setDimensions();
		cout<<"Enter reciever phone number : ";
		cin>>recieverPhoneNo;
		system("clear");
	}
			
	void Order :: displayOrderDetail(){
		cout<<"Parcel ID : "<<parcelID<<endl;
		cout<<"SenderAddress"<<endl;
		custAdd.displayAddress();
		cout<<"Reciever Address"<<endl;
		deliveryAdd.displayAddress();
		cout<<"Reciever Phone Number : "<<recieverPhoneNo<<endl;
		cout<<"Urgency : "<<urgency<<endl;
		cout<<"Weight : "<<weight<<endl;	
		dimensions.displayDimensions();
		cout<<endl;
		
	}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
