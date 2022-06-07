#include <iostream>
//for strings
#include <string>
using namespace std;

int global_variable;
int joes_var;


const int MAX_SPEED = 900;

//compiled languages have to keep rebuilding to get all the data in


namespace austins_rad_stuff 
{
	int foo = 123;
		char cg = 'A';
}
// comment types
/* types of comment types*/

using namespace austins_rad_stuff;

int main()
{


	int integer = 123 + 13333;
	//can add stuff in the variables
	char ch = 'd';
	float number_with_decimal = 123.23;
	//int char float double primitive type varaible


	std::cout << "Hello World!\n";
	/* for the using a package
	* std declare the package :: is how we go inside of the pacakge ... cout is to leave the package
	*/
	//this is where we console the returns
	ch = '4';

	austins_rad_stuff::foo;
	//one option for grabbing data from a package or dictionary
	foo;
	//using name space to grab data from a package no longer needing to print the name and ::

	cout << integer;

	cout << "I am joe\a" << "this is\t " << "Austin" << endl;

	cout << integer << "this is an integer" << endl;

	foo;


	//Escape sequences are what the ending things are

	cout << MAX_SPEED;


	int input = 0;

	cout << "Enter a number: ";

	cin >> input;
	//cin carrots go >> because its going into the data and select the variable name

	cout << "this is your number!!!: " << input << endl;

	cin.get();

	//this is the input for the c++ world

	//char ch;

	/*cout << "enter a thing: ";
	cin >> ch;
	cout << "here is the thing : " << ch;*/


	// 0 1 2 3 4
	//this defines the array
	char ch_arr[5] = { '1', '2', '3', '4', '5' };
	//char ch_arr[5] = "1234";
	char other[5] = "5678";
	cout << "Enter your name: ";
	cin >> ch_arr;
	cout << "This is your name: " << ch_arr << endl;

	cout.flush();
	cin.ignore();
	fflush(stdin);


	//input buffer in terminal so the cin.ignore read the new input buffer and then ignored it and continued past it good job austin! figuring it out
	//remember to flush the code 

	//char ch_arr[5] = "1234\0"; there is a null escape character in the string to hold a place in the memory
	//this is a string literal null terminal is necessary to print in the c++ language \0 is the null terminator
	//

	/*
	100 > this contains 1
	101 > 2
	102 > 3
	103 > 4
	104 > \0
	105 > 5
	106 > 6

	*/


	string str = "wowowowowowowowowwowoowwo";

	int foo;

	cout << foo;

	//we have to initialize the variables never leave them blank


	/*cout << "Enter something here: \t";
	cout.flush();
	getline(cin, str);
	cout << "Here is the name: " << str;
	*/
	

	return 0;
}




//try while, for, and if statements