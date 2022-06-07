#pragma once

#include "Shape.h"

class Rectangle : public Shape

{
	int W;
	int H;
	
	void _CalculateArea()
	{
		area = W * H;
	}

public:
	Rectangle(int x, int y, int w, int h)
		:Shape(x, y)
	{

		W = w;
		H = h;
		area = W * H;
		Name = "rectangel";
	}

	float GetArea() override
	{
		return area;
	}

	void PrintName() override
	{
		Shape::PrintName();
		cout << "Here is my area: " << GetArea();
		cout << "that was easy!\n";


	}

	void SetWidth(int newValue)
	{
		W = newValue;
		_CalculateArea();
	}

	void setHeight(int newValue)
	{
		H = newValue;
		_CalculateArea();
	}
};