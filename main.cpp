#include <iostream>
#include "HugeInteger.h"
#define SIZE 5
using namespace std;



int main()
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 3,4,5,6,7 };
	HugeInteger h(a, b, SIZE);
	h.output();
	h.add();
	h.subtract();
	if (h.isEqualTo() == true)
	{
		cout << "arr1 and arr2 are equal." << endl;
	}
	if (h.isGreaterThan() == true)
	{
		cout << "arr1 is greater than arr2." << endl;
	}
	if (h.isGreaterThanOrEqualTo() == true)
	{
		cout << "arr1 is greater than or equal to arr2." << endl;
	}

	if (h.isLessThan() == true)
	{
		cout << "arr1 is less than arr2." << endl;
	}

	if (h.isLessThanOrEqualTo() == true)
	{
		cout << "arr1 is less than or equal to arr2" << endl;
	}

	if (h.isNotEqualTo() == true)
	{
		cout << "arr1 is not equal to arr2." << endl;
	}

	return 0;
}