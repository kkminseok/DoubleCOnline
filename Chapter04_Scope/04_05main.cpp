#include<iostream>
#include<typeinfo>
#include<iomanip>
int main()
{
	using namespace std;
/*
	int a = 123;
	a = 123.0;
*/
	int a = 123;
	float flo = 1.0f;
	double d = flo; // numeric promotion; // ��ū �ڷ������� ���� ū ������ ����.

	//numeric conversion
	double d2 = 3;
	short s = 2;

	double dex = 0.123456789;
	float fex = dex;

	cout << std::setprecision(12) << fex << endl;

	//numeric conversion
	cout << 5u - 10 << endl;

	//�ڷ����� �켱���� -> int, unsigned int, long, unsigned long
	// long long, unsinged long long, float, double, long double ->�켱���� ���� ����


	int ex = 30000;
	char c = ex;
	cout << static_cast<int>(c) << endl;// ����� ����ȯ

	cout << typeid(a).name() << endl;//type�� �˷���

	//����� ����ȯ
	int mi = int(4.0);//c++
//	int mi = (int)4.0;
//	int mi = static_cast<int>(4.0);


}