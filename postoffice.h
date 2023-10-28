/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#ifndef POSTOFFICE_H
#define POSTOFFICE_H
#include <iostream>
#include <string>
#include "mails.h"
#include "address.h"
using namespace std;

class PostOffice: public Mails, public PostalWorker{
protected:
	Address add;
	int code;
public:
	PostOffice();
	



};
#endif
