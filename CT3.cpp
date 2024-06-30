/*
*CT3.cpp
* Created by:Braden Durian
*Jun 30, 2024
*10:52:57 AM
*/
#include <iostream>
#include <limits>
#include <conio.h>

using namespace std;

int main()
{

	int num1, num2, num3; //Declare integer variables

	cout << "Enter your first integer" << endl;
	while(!(cin >> num1)) //extraction and input validation
	{
		cout << "Your entry was not a valid integer, please try again" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear any leftover input in the buffer between entries

	cout << "Enter your second integer" << endl;
	while(!(cin >> num2))
	{
		cout << "Your entry was not a valid integer, please try again" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter your final integer" << endl;
	while(!(cin >> num3))
	{
		cout << "Your entry was not a valid integer, please try again" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//Declare and set pointers
	int* p_Num1 = new int(num1);
	int* p_Num2 = new int(num2);
	int* p_Num3 = new int(num3);

	//Print Integer 1
	cout << "Integer 1 Value: " << num1 << endl;
	cout << "Pointer 1 Value: " << *p_Num1 << endl;
	cout << "Pointer 1 Address: " << p_Num1 << endl;
	//Print Integer 2
	cout << "Integer 2 Value: " << num2 << endl;
	cout << "Pointer 2 Value: " << *p_Num2 << endl;
	cout << "Pointer 2 Address: " << p_Num2 << endl;
	//Print Integer 3
	cout << "Integer 3 Value: " << num3 << endl;
	cout << "Pointer 3 Value: " << *p_Num3 << endl;
	cout << "Pointer 3 Address: " << p_Num3 << endl;

	delete p_Num1;
	delete p_Num2;
	delete p_Num3;

	_getch(); //wait for key press to terminate program

return 0;
}
