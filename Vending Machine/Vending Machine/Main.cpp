#pragma once

#include <iostream>
#include "Item.h"
#include "VendHead.h"

using namespace std;



int main()
{
	int intVariable;
	VendingMachine vendMach;

	Item Cheetos("Cheetos", 1.35);
	Item Fritos("Fritos", 3.35);
	Item Joes("Wow fire", 2.99);
	Item Jakes("Chip of death", 5.35);
	Item Austin("Salty Surprise", 0.89);

	vendMach.AddItem(Cheetos);
	vendMach.AddItem(Fritos);
	vendMach.AddItem(Joes);
	vendMach.AddItem(Jakes);
	vendMach.AddItem(Austin);

	vendMach.DisplayItems();

	vendMach.RemoveItem(3);
	cout << "\n\n";

	vendMach.DisplayItems();


	return 0;
}