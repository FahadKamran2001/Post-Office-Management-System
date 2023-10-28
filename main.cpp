//Fahad Kamran
//CS-B
//20I-0983
//OOP PROJECT
//OOP-C
#include <iostream>
#include <string>
//#include <curses.h>	//library to use getch() function
#include <unistd.h>	//library to use sleep function

#include "customer.h"
using namespace std;


int main(){
	system("clear");
	cout<<"*************************************"<<endl;
	cout<<"Pakistan Post Courier Service"<<endl;
	cout<<endl;
	cout<<"---------------WELCOME---------------"<<endl;
	cout<<endl;
	cout << "Press any key to continue...\n";
	char useless;
	cin>>useless;
	//getch();
	
	system("clear");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\nLoading ||||||                                                  | 12% ....\n";
	sleep(1);
	system("clear");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\nLoading |||||||||||||||||||||||||||||||||                       | 61% ....\n";
	sleep(1);
	system("clear");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\nLoading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....\n";
	sleep(1);
	system("clear");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\nLoading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....\n";
	sleep(1);
	system("clear");
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	Customer c;
	c.setCustomerOrders();
	c.displayCustomerOrders();
	return 0;
}
