#include <iostream>
#include <string>
//
//int main()
//{
//	std::string str = "fefwfw";
//	char st[] = "fewfwfe";
//	const char* stt = "fewfwfe";
//	std::cout << str[0] << std::endl;
//	std::cout << st[0] << std::endl;
//return 0;
//}

using namespace std;

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

void swap4(int x, int* y)
{
	int temp;
	temp = x;
	x = *y;
	*y = temp;
}

void swap5(int* &x, int* &y)
{
	int* temp;
	temp = x;
	x = y;
	y = temp;
}



void doOp(int i, int j, int& addResult, int& substractResult, int& multipleResult, int& divisionResult)
{
	addResult = i + j;
	substractResult = i - j;
	multipleResult = i * j;
	if (j != 0)
	{
		divisionResult = i / j;
	}
}

bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}

string::size_type find_char(const string& s, const char c)
{
	string::size_type i = 0;
	while (i != s.size() && s[i] != c)
	{
		++i;
	}

	return i;
}



int main()
{
	int a, b, c;
	a = 1, b = 2, c = 3;
	int addResult, substractResult, multipleResult, divisionResult;
	string s("hello world!");
	cout << "before swapping1: " << a << ", " << b << endl;
	swap1(a, b);
	cout << "after swapping1: " << a << ", " << b << endl;

	cout << "before swapping2: " << a << ", " << b << endl;
	swap2(&a, &b);
	cout << "after swapping2: " << a << ", " << b << endl;

	cout << "before swapping3: " << a << ", " << b << endl;
	swap3(a, b);
	cout << "after swapping3: " << a << ", " << b << endl;

	cout << "before swapping4: " << a << ", " << b << endl;
	swap4(a, &b);
	cout << "after swapping4: " << a << ", " << b << endl;

	doOp(c, a, addResult, substractResult, multipleResult, divisionResult);
	cout << "addResult: " << addResult << ", " << "substractResult: " << substractResult 
		<< ", " <<"multipleResult: " << multipleResult << ", " << "divisionResult: " << divisionResult;

	int index = find_char(s, 'd');
	cout << "s[" << index << "]" << endl;

	return 0;
}