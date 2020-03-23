#include<iostream>
#include"my_constHeader.h"
using namespace std;
void printNumber(const int& my_number)//my_number 수정 불가능
{
	//함수내에서 파라미터 값을 바꾸는것은 지양하자.
	cout << my_number << endl;
}

int main()
{

	const double gravity{ 9.8 }; //반드시 초기화 해줘야한다.
	//double const gravity{9.8} ; 가능 선호 하지는 않는다.
	//gravity = 1.2; 수정 불가능

	printNumber(123);
	
	int number;
	cin >> number;

	//런타임에서 값이 결정된다. 컴파일 시 결정되는게 아님.
	const int speical_number(number);

	//speical_number는 수정이 불가능
	number = 123;

	//c++17 constexpr 컴파일타임 때 결정되는 상수라는 것을 명시
	constexpr int my_const(123);
	//constexprt int special_number(number); 불가능

	//const 몰아넣어서 쓰는 예제

	double radius;
	cin >> radius;
	double circumference = 2.0*radius*constants::pi;
	cout << circumference << endl;

	


	return 0;
}