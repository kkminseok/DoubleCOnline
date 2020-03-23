#include<iostream>
//#include<cstdint> iostream안에 있다.

int main()
{
	using namespace std;

	std::int16_t i(5);//2 byte짜리 데이터로 바꿔줌.
	std::int8_t myint = 65;// 1 byte짜리 마우스를 가져놓으면 데이터 타입이 char이다.

	cout << myint << endl;

	std::int_fast8_t fi(5);// int형 데이터 타입중 가장 빠른 자료형 - char
	std::int_least64_t fl(5);// int형 데이터 타입중 최소 64비트를 가지는 정수형 - long long int

}