// CIT125 Intro to C++ Luigi Robles
// 07-31-2020 Summer Term
// Ch 12 Pg.432 Figure 12-6
// Chapton Company Program
// Gets and displays order amounts

#include <iostream>
using namespace std;

int main()
{
	//declare and initialize array
	int orders[4][3] = { 0 };

	//store data in the array
	for (int region = 0; region < 4; region += 1)
		for (int month = 0; month < 3; month += 1)
		{
			cout << "Region " << region + 1
				<< ", Month " << month + 1
				<< " orders: ";
			cin >> orders[region][month]; //input for regions and months into array
		}	//end for
	//end for

	//display the contents of the array
	cout << endl << "Array contents:" << endl;
	for (int region = 0; region < 4; region += 1)
	{
		cout << "Region " << region + 1
			<< ": " << endl;
		for (int month = 0; month < 3; month += 1)
			cout << "   Month " << month + 1
			<< ": " << orders[region][month] //display the orders for each region and month
			<< endl;
		//end for
	}//end for
	return 0;
} //end of main function
