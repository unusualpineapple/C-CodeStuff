#pragma once
#include "Shape.h"

class Circle : public Shape

	{
		int R;
		

	public:
		Circle(int x, int y, int r)
			:Shape(x, y)
		{

			R = r;
			

			Name = "Circle";
		}

		float GetArea() override
		{
			return 3.14*(R*R);
		}

		void PrintName() override
		{
			Shape::PrintName();
			cout << "Here is my area: " << GetArea();
			cout << "that was super easy!\n";


		}
	};
