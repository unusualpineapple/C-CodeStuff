
//#include <iostream>
//
//using namespace std;
//
//void someFunc()
//{
//	//stuff
//}
//
//// not good practice to pass in values to have the references be changed
//
////foward declarations define early on and then define them later on in the code
//void pass_By_Value(int a);
////passing a value into the function
//
//void pass_By_Pointer(int* b);
////remember to dereference the address to then change value
////need & to find the address
//
//void pass_By_Reference(int& c);
////this parameter is a reference stated in the parameter
//
//void very_common_cpp_func(const int& d);
////this is a constant reference so that you can not modify what you are passing into the function
//// use this as a normal in coding
//
//int main()
//{
//	int foo = 123;
//
//	pass_By_Value(foo);
//
//	pass_By_Pointer(&foo);
//	//this is the reference inside of the passed value
//
//	pass_By_Reference(foo);
//
//	//for inline 
//	pass_By_Reference(foo);
//	pass_By_Reference(foo);
//	pass_By_Reference(foo);
//	pass_By_Reference(foo); 
//	pass_By_Reference(foo);
//
//	return 0;
//}
//
//void pass_By_Value(int a)
//{
//	a = 345;
//}
//
//void pass_By_Pointer(int* b)
//{
//	*b = 345;
//	//changes foo to 345
//}
//
//void pass_By_Reference(int& c)
//{
//	c = 678; // changes foo to 678 instead 345
//}
//
//void very_common_cpp_func(const int& d)
//{
//	cout << d << endl;
//}
//
//inline void very_common_cpp_func(const int& d)
//{
//	cout << d << endl;
//	//replaces the function with what is in side of the function
//}