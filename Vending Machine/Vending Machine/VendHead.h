#pragma once


#include <iostream>
#include <vector>
#include "Item.h"

using namespace std;


class VendingMachine
{
	float totalMoney;

	const unsigned MAX_ITEMS;
	std :: vector<Item> items;

	


public:

	VendingMachine();


	float GetTotalMoney();

	void SetTotalMoney(float newAmount);

	void AddItem(Item newItem);

	void RemoveItem(unsigned index);

	void DisplayItems();

};


