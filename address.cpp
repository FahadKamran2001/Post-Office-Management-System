/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#include <iostream>
#include <string>
#include "address.h"
using namespace std;


	Address :: Address(){}
	void Address :: setAddress(){
		cout<<"Enter House Number : ";
		cin>>houseNo;
		cout<<"Enter Street Number : ";
		cin>>street;
		cout<<"Enter City : ";
		cin>>city;
		city = lowerString(city);
		cout<<"Enter Country : ";
		cin>>country;
		country = lowerString(country);
	}
	void Address :: displayAddress(){
		cout<<"House #"<<houseNo<<", Street #"<<street<<", "<<city<<", "<<country<<endl;
	}
	string Address :: lowerString(string str){
		for(int i=0;str[i]!='\0';i++){
			if (str[i] >= 'A' && str[i] <= 'Z'){   //checking for uppercase characters
				str[i] = str[i] + 32;         //converting uppercase to lowercase
			}
		}
		return str;
	}
	string Address :: getCity(){
		return city;
	}
	string Address :: getCountry(){
		return country;
	}
	string Address :: getStreet(){
		return country;
	}
	string Address :: getHouseNo(){
		return houseNo;
	}
	
	void Address :: setCity(string c){
		c = lowerString(c);
		city = c;
	}
	void Address :: setCountry(string c){
		c = lowerString(c);
		country = c;
	}
	void Address :: setStreet(string s){
		street = s;
	}
	void Address :: setHouseNo(string h){
		houseNo = h;
	}
	
	
	
	
	
