#include <iostream>
#include "Shape.h"
#include "rectangle.h"
#include "cirlce.h"

using namespace std;

int main() 
{
	//Rectangle rect(1, 2,3,4);
	//Circle cir(5, 1, 6);

	//Shape* shape = new Rectangle(1, 2, 3, 4);
	//shape->PrintName();

	Shape* shapes[6];

	for (int i = 0; i < 3; i++)
	{
		shapes[i] = new Rectangle(1, 2, 3 + i, 1 + i);
	}
	for (int i = 3; i < 6; i++)
	{
		shapes[i] = new Circle(1, 2, 1 + i);
	}
	for (int i = 0; i < 6; i++)
	{
		shapes[i]->PrintName();
	}



	//rect.PrintName();

	//cir.PrintName();


	return 0;
}