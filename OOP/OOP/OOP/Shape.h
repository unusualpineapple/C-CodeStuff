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
// ----- when we make a class and give it the variables of a parent class
//Encapsulation
// ----- Hiding data in values and setting or getting that data



class Shape
{
	int X;
	int Y;

protected:

	string Name;
	float area;

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
	int GetX()
	{
		return X;
	}
	void SetX(int newValue)
	{
		X = newValue;
	}
};
