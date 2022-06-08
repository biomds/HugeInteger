#ifndef HugeInteger_H
#define HugeInteger_H

/*
(HugeInteger Class) Create a class HugeInteger that uses a 40-element array of digits to
store integers as large as 40 digits each. Provide member functions input, output, add and subtract.
For comparing HugeInteger objects, provide functions isEqualTo, isNotEqualTo, isGreaterThan,
isLessThan, isGreaterThanOrEqualTo and isLessThanOrEqualTo¡ªeach of these is a ¡°predicate¡±
function that simply returns true if the relationship holds between the two HugeIntegers and returns
false if the relationship does not hold. Also, provide a predicate function isZero. If you feel
ambitious, provide member functions multiply, divide and modulus.
*/
class HugeInteger
{
public:
	explicit HugeInteger(int a[], int b[], int size);
	void input(int a[], int b[]);
	void output();
	void add();
	void subtract();
	bool isEqualTo();
	bool isNotEqualTo();
	bool isGreaterThan();
	bool isLessThan();
	bool isGreaterThanOrEqualTo();
	bool isLessThanOrEqualTo();
private:
	int arr_size;
	int* arr1 = {0};
	int* arr2 = {0};

};
#endif