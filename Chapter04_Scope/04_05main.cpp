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
	double d = flo; // numeric promotion; // 더큰 자료형으로 가서 큰 문제는 없다.

	//numeric conversion
	double d2 = 3;
	short s = 2;

	double dex = 0.123456789;
	float fex = dex;

	cout << std::setprecision(12) << fex << endl;

	//numeric conversion
	cout << 5u - 10 << endl;

	//자료형의 우선순위 -> int, unsigned int, long, unsigned long
	// long long, unsinged long long, float, double, long double ->우선순위 가장 높다


	int ex = 30000;
	char c = ex;
	cout << static_cast<int>(c) << endl;// 명시적 형변환

	cout << typeid(a).name() << endl;//type을 알려줌

	//명시적 형변환
	int mi = int(4.0);//c++
//	int mi = (int)4.0;
//	int mi = static_cast<int>(4.0);


}