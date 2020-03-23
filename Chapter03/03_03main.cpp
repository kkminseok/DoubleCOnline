#include<iostream>

//연산자의 부작용
int add(int a, int b)
{
	return a + b;
}


int main()
{
	using namespace std;

	int x = 5;
	int y = --x;
	int z = x--;

	cout << y << endl;
	cout << z << endl;

	int a = 6, b = 6;
	cout << a << " " << b << endl;
	cout << ++a << " " << --b << endl;
	cout << a++ << " " << b-- << endl;
	cout << a << " " << b << endl;

	int add1 = 1;
	int result = add(add1, ++add1);//do not use

	cout << result << endl;

}