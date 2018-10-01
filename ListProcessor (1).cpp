// ListProcessor.cpp
// Edited by Niloufar Shamloo 9/30/2018
// tom bailey   1540  30 sep 2011
// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList (1).h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	cout << "cosw list : " << cows << endl << endl;

	//size method NS
	cout << "cows list : " << cows << endl << endl;
	cout << "There are " << cows.size() << " numbers of cows in the list." << endl; //Test for Size
	cout << "The sum of cows is " << cows.sum() << endl; //Test for Sum
	cows.insertAsLast(17);
	cout << " Testing insert as last (cows) " << endl; //Test for insertAsLast

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "There are " << horses.size() << " numbers of horses in the list." << endl; //Test for Size
	cout << "The sum of horses is " << horses.sum() << endl; //Test for Sum
	horses.insertAsLast(9.2);
	cout << " Testing insert as last (horses) " << endl; //Test for insertAsLast

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;


	cout << "End of code" << endl;

	return 0;
}