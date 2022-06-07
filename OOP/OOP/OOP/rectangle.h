#pragma once

#include "Shape.h"

class Rectangle : public Shape

{
	int W;
	int H;

public:
	Rectangle(int x, int y, int w, int h)
		:Shape(x, y)
	{

		W = w;
		H = h;

		Name = "rectangel";
	}

	float GetArea() override
	{
		return W * H;
	}

	void PrintName() override
	{
		Shape::PrintName();
		cout << "Here is my area: " << GetArea();
		cout << "that was easy!\n";


	}
};