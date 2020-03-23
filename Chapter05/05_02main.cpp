#include<iostream>

int main()
{
	using namespace std;

	int x;
	cin >> x;

	if (x > 10)
	{
		cout << x << " is greater than 10" << endl;
		cout << "Test 1" << endl;
	}
	else
	{
		cout << x << "is not greater than 10" << endl;
		cout << "Test 2" << endl;
	}

	//chaining
	if (x > 10)
		cout << "x is greater than 10" << endl;
	else if (x < 10)
		cout << "x is less than 10" << endl;
	else
		cout << "x is exactly 10" << endl;

	/*
	if
	else
	{
		 if
			  if
				....
	*/

	int y;
	cin >> y;
	if (x > 0 && y > 0)
		cout << "both numbers are postivie" << endl;
	else if (x > 0 || y || 0)
		cout << "one of the number is positive" << endl;
	else
		cout << "Neither number is positive" << endl;

	//주의점
	if (x = 0) //거쳐간다.
		cout << x << endl;


}