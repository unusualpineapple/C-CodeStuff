#pragma once
#include <iostream>
#include <string>


using namespace std;

//OOP
//A PIE
//Abstraction
// ----- Making a class so you cant change 
//Polymorphism
// ----- can take many forms
//Inheritance
//Encapsulation



class Shape
{
	int X;
	int Y;

protected:

	string Name;

public:
	Shape() 
	{

	}
	Shape(int x, int y)
	{
		X = x;
		Y = y;
	}
	//making a pure virtual function the virtual and = 0 
	//this makes it inherit what shape does
	virtual float GetArea() = 0;

	virtual void PrintName()
	{
		cout << "I'm a " << Name << "!\n";
	}

};
