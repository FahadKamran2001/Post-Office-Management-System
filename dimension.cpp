/* Fahad Kamran
   20I-0983
   CS-B
   OOP-C
   */
#include <iostream>
#include <string>
#include "dimension.h"
using namespace std;

	Dimension :: Dimension(){}
	void Dimension :: setDimensions(){
		cout<<"Dimensions are in centimeters"<<endl;
		cout<<"Enter width of package : ";
		cin>>width;
		cout<<"Enter length of package : ";
		cin>>length;
		cout<<"Enter height of package : ";
		cin>>height;
	}
	void Dimension :: displayDimensions(){
		cout<<"Dimension : "<<length<<"cm x "<<width<<"cm x "<<height<<"cm"<<endl;
	}
