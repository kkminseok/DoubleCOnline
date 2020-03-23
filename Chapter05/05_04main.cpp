#include<iostream>
#include<cmath> // sqrt()

int main()
{
	using namespace std;
	double x;
	tryagian : //label
	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryagian;
	
	/*
	logical Problem
	goto skip;
	
	int x = 5;
skip:
	x += 3;
	return 0;
	*/
	cout << sqrt(x) << endl;
}