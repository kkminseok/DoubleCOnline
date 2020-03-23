#include<iostream>

using namespace std;

int main()
{
	int x = 2;// x is a variables, 메모리주소 가지고 있음. 2 is a literal.

	cout << "Hello, World" << endl;//문자열도 리터럴 상수
	cout << 1 + 2 << endl;// 1과 2는 리터럴

	int y = (x > 0) ? 1 : 2;
	//x가 0보다 크면 y에 1을 대입, 크지않으면 y에 2를 대입.

	cout << y << endl;

	x = -2;
	y = (x > 0) ? 1 : 2;

	cout << y << endl;


	return 0;
}