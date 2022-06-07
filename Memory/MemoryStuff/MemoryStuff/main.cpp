#include <iostream>

using namespace std;



// struct is a class but eveything is public

//int main()
//{
//
//	int magnus = 999;
//	int foo = 123;
//	int* ptr_foo = &foo;
//
//	int arr[3] = { 8,2,6 };
//	int* ptr_arr = arr;
//	int* another_ptr = ptr_foo;
//
//
//	int** dbl_ptr = &ptr_foo;
//	
//
//	cout << "Foo = " << foo << "\n";
//	cout << "pointer foo = " << ptr_foo << "\n";
//
//	*ptr_foo = 345;
//
//	cout << "Foo = " << foo << "\n";
//
//	dbl_ptr = &another_ptr;
//
//
//	**dbl_ptr = 678;
//
//	cout << "Foo = " << foo << "\n";
//
//	
//	cout << "magnus = " << magnus << "\n";
//	*dbl_ptr = &magnus;
//
//	**dbl_ptr = 111;
//	cout << &magnus << "\n";
//	cout << "magnus = " << magnus << "\n";
//
//	return 0;
//
//}

struct Foo
{
	Foo()
	{
		std::cout << "\tFoo constructed\n";

	}
	~Foo()
	{
		std::cout << "\tFoo destroyed\n";
	}
};

class Item
{

	Foo* ptr;

public:
	unsigned value;
	Item()
	{
		value = 123;
		std::cout << "Item constructed\n";
		ptr = new Foo;

	}
	~Item()
	{

		std::cout << "Item destroyed\n";
		delete ptr;
	}
};

void someOtherMethod()
{
	Item another;
}

void someMethod()
{
	Item* newItem;

	newItem = new Item[3];

	delete[] newItem;
}


int main()
{
	someOtherMethod();
	cout << "\n\n";
	someMethod();
	cout << "\n\n";


	return 0;
}


/*
		MEMORY STUFF
high address the end result
low address the start result 

stack are the things that get ran and grows down in meaning starts with instruction and then reads the next line of code which means they count down from memory
heap grows upwards which mean the memory will rise

after a code is run it will pop it off the initialize memory usage and be more efficiant

heap dynamic memory creating new memory in a program
stack overflow happens when stack and heap cross over eachother
*/

/*
	POINTERS
* means pointer and points to an integer
* the & sign takes the address of the variable 
* meant to hold the address of variables 
* 4 byte variable that holds addresses
* maybe conserving memory to call bigger variables for less memory
* array are pointers with size
* for a pointer to work it has to be accesible 
* use the * to jump to the location of memory
* class object you have to use -> to reference what you want to specifically look at
* wrap in (*object).value to refer the object to not use ->
* dont forget to delete new items from a method in the method because you may have a potential of stack overflow since we have to manage the memory
* 	newItem->value;
	(*newItem).value;

	//delete newItem;


*/