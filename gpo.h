/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#ifndef GPO_H
#define GPO_H
#include <iostream>
#include <string>
#include "postoffice.h"
#include "address.h"
using namespace std;
//main headoffice of post
class GPO : public PostOffice{
protected:
	Address add;
	PostOffice post[5];
public:
	GPO();
	



};
#endif
