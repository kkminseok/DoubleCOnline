#include<iostream>

int main()
{
	using namespace std;

	float pi = 3.14;
	int i = 12324;

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e1;

	//8진수(Octal) : 0 1 2 3 4 5 6 7 10 ...
	//16진수(Hexa) : 0 1 2 3 4 5 6 7 8 9 A B ... F 10

	// 0011 1010 1111 1111
	// =3AFF(Hexa)

	int x = 12; //Decimal;
	x = 012;//Octal
	cout << x << endl;

	x = 0xF;//Hexa
	cout << x << endl;

	//c++14에서 binary 입력 가능
	
	x = 0b1010;
	cout << x << endl; //2진수 1010은 10이다.
	
	x = 0b1011'1111'1010; //보기편하게 따옴표로 구분이 가능하다.
	cout << x << endl;

	//magic number

	



	return 0;
}