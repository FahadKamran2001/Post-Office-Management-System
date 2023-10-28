/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#ifndef DIMENSION_H
#define DIMENSION_H
#include <iostream>
#include <string>
using namespace std;

class Dimension{
protected:
	int width;
	int height;
	int length;
	
public:
	Dimension();
	void setDimensions();
	void displayDimensions();
};
#endif
