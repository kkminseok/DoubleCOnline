#include<iostream>
#include<iomanip>
#include<limits>
#include<cmath>

int main()
{
	using namespace std;

	float f;
	double d;
	long double ld;

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl<<endl;

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl<<endl;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl<<endl;


	///////////////////////////////////
	float f2(3.141592f);// 3.14= 31.4 * 0.1 (10e-1)
	double d2(3.141592);
	long double ld2(3.141592);

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;

	cout << std::setprecision(16) << endl;
	cout << 1.0 / 3.0 << endl;

	float f3(123456789.0f);// 10 significant digits

	cout << std::setprecision(9);
	cout << f3 << endl; //오차 발생

	double d3(0.1);

	cout << d3 << endl;
	cout << std::setprecision(17);
	cout << d3 << endl; //오차 발생

	double d4(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << d4 << endl;
	cout << setprecision(20) << endl;
	cout << d4 << endl;//오차 발생

	/////////////
	double zero = 0.0;
	double posinf = 5.0 / zero;// 0으로 나눔
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout <<endl<< posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;

	//std::isnan
	cout << nan << " " << std::isnan(nan) << endl;
	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;

	//연습문제 
	//3.141592, 31.41, 0.001000, 123.0002, 0.0000000001, 234560000.000
	//과학적 표기법으로 표현
	
	cout << "/*  연습문제  */" << endl;
	cout << setprecision(7) << 314159.2e-5 << endl;
	cout << setprecision(3) << 314.1e-1 << endl;
	cout << setprecision(7) << 1e-3 << endl;
	cout << setprecision(8) << 123000.2e-3 << endl;
	cout << setprecision(20) << 1e-9 << endl;
	cout << setprecision(4) << 23456000e1 << endl;

}