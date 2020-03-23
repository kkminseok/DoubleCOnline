#include<iostream>

int main()
{
	using namespace std;

	int x = 8;
	int y = -x; //-1
	
	int a = 7;
	int b = 4;

	cout << a / b << endl;
	cout << float(a) / b << endl;
	cout << a / float(b) << endl;
	cout << float(a) / float(b) << endl;

	cout << -5 % 2 << endl;
	cout << 5 % -2 << endl;

	b += a;// 11
	b -= a;// 4
	b /= a;// 0
	b *= a;// 0
	


	return 0;
}