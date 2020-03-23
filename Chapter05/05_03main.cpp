#include<iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	if (color == Colors::BLACK)
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White" << endl;

	//.....

	//equal statements

	switch (color)
	{
	case Colors::BLACK :
		cout << "Black" << endl;
		break;
		//...
	}
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black" << endl;
		break;
		//....
	}
}
int main()
{
	//printColorName(Colors::BLACK);

	int x;
	cin >> x;

	switch (x)
	{
	case 0:
		cout << "zero";
		//break;
	case 1:
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	default:
		cout << "Undefined input" << x << endl;
		break;
	}
}