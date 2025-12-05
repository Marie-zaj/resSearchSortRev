#include "DynamicArray.h"
#include <iostream>
using namespace std;

//DynamicArray GetObj()
//{
//	DynamicArray obj(3);
//	obj.Input();
//
//	return obj;
//}
int main()
{
	srand(time(0));

	DynamicArray arr(5);
	arr.Input();

	cout << "The array without changes: \n";
	arr.Output();

	cout << "Sorted array: \n";
	arr.Sort();
	arr.Output();

	cout << "Reversed elements: \n";
	arr.Reverse();
	arr.Output();

	cout << "Increase the size from 5 to 8: \n";
	arr.ReSize(8);
	arr.Output();
	cout << "Reduce the size from 8 to 4: \n";
	arr.ReSize(4);
	arr.Output();

	int val = 10;
	int ind = arr.Search(val);
	if (ind != -1)
		cout << "The element " << val << " founded by index" << ind << endl;
	else
		cout << "The element " << val << "wasn`t found." << endl;
	return 0;
}