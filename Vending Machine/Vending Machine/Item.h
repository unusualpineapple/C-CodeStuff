#pragma once

#include <string>

using namespace std;

class Item
{
	Item()
	{

	}

public:

	string name;
	float price;



	Item(string Name, unsigned Price)
	{
		name = Name;
		price = Price;
	}
};
