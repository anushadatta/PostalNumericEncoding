#include "encode.h"
#include "encode.cpp"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{	
	//cout << "Enter a ZIP code number: ";
	
	if (argc != 2)
	   std::cout << "\nUsage: barcode.exe number" << std::endl;
	
	long postal = std::stof(argv[1]);	
	std::cout << "\nThe bar code representation of " << postal << " is " 
	<< barcode(postal) << "." << "\n";
}