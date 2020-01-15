#include <iostream>
#include <vector>

using namespace std;

void print(vector<double> v)
{
	for (auto i : v)
	{
		cout << i << endl;
	}
}

void print2(vector<double>& v)
{
	vector<double>::iterator begi = v.begin();
	while (begi != v.end())
	{
		cout << *begi++ << endl;
	}
}

void print3(vector<double>::const_iterator begi, vector<double>::const_iterator en)
{
	while (begi != en)
	{
		cout << *begi++ << endl;
	}
}

double Sum(vector<double>::iterator begi, vector<double>::iterator en)
{
	double sum = 0.0;
	while (begi != en)
	{
		sum += *begi++;
	}
	return sum;
}

int main()
{
	vector<double> dvec;
	dvec.push_back(1.0);
	dvec.push_back(1.1);
	dvec.push_back(1.2);
	dvec.push_back(1.3);
	//print(dvec);

	//print2(dvec);

	//print3(dvec.begin(), dvec.end());

	double sum = 0.0;
	sum = Sum(dvec.begin(), dvec.end());
	cout << sum << endl;

	return 0;
}