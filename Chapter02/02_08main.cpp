#include<iostream>

int main()
{
	using namespace std;

	float pi = 3.14;
	int i = 12324;

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e1;

	//8����(Octal) : 0 1 2 3 4 5 6 7 10 ...
	//16����(Hexa) : 0 1 2 3 4 5 6 7 8 9 A B ... F 10

	// 0011 1010 1111 1111
	// =3AFF(Hexa)

	int x = 12; //Decimal;
	x = 012;//Octal
	cout << x << endl;

	x = 0xF;//Hexa
	cout << x << endl;

	//c++14���� binary �Է� ����
	
	x = 0b1010;
	cout << x << endl; //2���� 1010�� 10�̴�.
	
	x = 0b1011'1111'1010; //�������ϰ� ����ǥ�� ������ �����ϴ�.
	cout << x << endl;

	//magic number

	



	return 0;
}