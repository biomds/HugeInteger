#include <iostream>
#include "HugeInteger.h"
using namespace std;

HugeInteger::HugeInteger(int a[], int b[], int size)
{
	input(a, b);
	arr_size = size;
}

void HugeInteger::input(int a[], int b[])
{
	arr1 = a;
	arr2 = b;

}

void HugeInteger::output()
{

	cout << "arr1: ";
	for (size_t i = 0; i < arr_size; ++i)
	{
		cout << arr1[i] << (i < arr_size ?  " " :  "\n");
	}
	
	cout << "\narr2: " ;
	for (size_t j = 0; j < arr_size; ++j)
	{
		cout << arr2[j] << (j < arr_size  ? " " : "\n");
	}


}

void HugeInteger::add()
{
	cout << "\nadd of above arr is: ";
	for (size_t i = 0; i < arr_size; ++i)
	{
		cout << arr1[i] + arr2[i] << (i < arr_size ? " " : "\n");
	}
}

void HugeInteger::subtract()
{
	cout << "\nsubtract of above arr is: ";
	for (size_t i = 0; i < arr_size; ++i)
	{
		cout << arr1[i] - arr2[i] << (i < arr_size ? " " : "\n");
	}
	cout << "\n" << endl;
}

bool HugeInteger::isEqualTo()
{
	bool check = true;
	for (size_t c = 0; c < arr_size; ++c)
	{
		if (arr1[c] == arr2[c])
		{
			check = true;
		}
		else
		{
			return false;
		}
	}
	return check;
}

bool HugeInteger::isGreaterThan()
{
	bool check = true;
	for (size_t c = 0; c < arr_size; ++c)
	{
		if (arr1[c] > arr2[c])
		{
			check = true;
		}
		else
		{
			return false;
		}
	}
	return check;
}

bool HugeInteger::isGreaterThanOrEqualTo()
{
	bool check = true;
	for (size_t c = 0; c < arr_size; ++c)
	{
		if (arr1[c] >=arr2[c])
		{
			check = true;
		}
		else
		{
			return false;
		}
	}
	return check;
}

bool HugeInteger::isLessThan()
{
	bool check = true;
	for (size_t c = 0; c < arr_size; ++c)
	{
		if (arr1[c] < arr2[c])
		{
			check = true;
		}
		else
		{
			return false;
		}
	}
	return check;
}

bool HugeInteger::isLessThanOrEqualTo()
{
	bool check = true;
	for (size_t c = 0; c < arr_size; ++c)
	{
		if (arr1[c] <= arr2[c])
		{
			check = true;
		}
		else
		{
			return false;
		}
	}
	return check;
}

bool HugeInteger::isNotEqualTo()
{
	bool check = true;
	for (size_t c = 0; c < arr_size; ++c)
	{
		if (arr1[c] == arr2[c])
		{
			check = false;
		}
		else
		{
			return true;
		}
	}
	return check;
}