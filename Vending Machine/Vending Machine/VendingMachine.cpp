#include "VendHead.h"

VendingMachine::VendingMachine()

	: MAX_ITEMS(10)

{
	totalMoney = 0;

}

void VendingMachine::SetTotalMoney(float newAmount)
{

	totalMoney = newAmount;

}
float VendingMachine :: GetTotalMoney()
{
	return totalMoney;
}

void VendingMachine::AddItem(Item newItem)
{
	if (items.size() >= MAX_ITEMS)
	{
		return;
	}


	items.push_back(newItem);

}

void VendingMachine::RemoveItem(unsigned index)
{
	if (index >= items.size())
	{

		cout << "invalid index\n";
		return;
	}
	items.erase(items.begin() + index);
}

void VendingMachine::DisplayItems()
{
	for (int i = 0; i < items.size(); i++)
	{
		Item temp = items[i];
		cout << i << "Name: " << temp.name << "Price: " << temp.price << endl;

	}

}