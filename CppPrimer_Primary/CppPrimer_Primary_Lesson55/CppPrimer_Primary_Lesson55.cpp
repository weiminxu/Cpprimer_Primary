#include <iostream>

using namespace std;

void AddOne(int x)//parameter: it is not reference, just copy the parameter
{
	x = x + 1;
}

void AddTwo(int* px)//parameter: although it is not reference, it is pointer, not copy parameter, copy the address of parameter, the result is same as reference
{
	*px = *px + 2;
}

void AddThree(int& x)//parameter: it is reference, not copy the parameter
{
	x = x + 3;
}

int getBigger(int x, const int* y)
{
	return x > * y ? x : *y;
}

void swap1(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap2(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void swap3(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b, c;
	a = 1;
	b = 2;
	c = 3;

	cout << "before adding, a is : " << a << endl;
	AddOne(a);
	cout << "after adding, a is : " << a << endl;
	
	cout << "before adding, b is : " << b << endl;
	AddTwo(&b);
	cout << "after adding, b is : " << b << endl;

	cout << "before adding, c is : " << c << endl;
	AddThree(c);
	cout << "after adding, c is : " << c << endl;

	cout << "before swapping1: " << a << ", " << b << endl;
	swap1(a, b);
	cout << "after swapping1: " << a << ", " << b << endl;

	cout << "before swapping2: " << a << ", " << b << endl;
	swap2(&a, &b);
	cout << "after swapping2: " << a << ", " << b << endl;

	cout << "before swapping3: " << a << ", " << b << endl;
	swap3(a, b);
	cout << "after swapping3: " << a << ", " << b << endl;

	return 0;
}