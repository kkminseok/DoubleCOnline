#include<iostream>
#include"MyHeader.h"
using namespace std;

//전역 변수
int global = 123;

//정적 전역 변수
static int global2 = 213; // 다른 cpp파일에서 접근이 불가능하다.


//정적 변수
void doSomething()
{
	//
	static int a = 1;

	++a;
	cout << a << endl;
}

//forward declaration
/*extern 생략*/void testdoSomething();
extern int a; //초기화 불가능하다.


int main()
{
	//지역 변수
	int local = 1;
	cout <<"global "<< ::global <<"local "<< local << endl;

	doSomething();
	doSomething();
	testdoSomething();
	cout << a << endl;

	//extern를 안써줄 시 주소가 다르다. 메모리 낭비로 이어진다.
	cout << "In main.cpp file" << Constants::pi <<" " <<&Constants::pi <<endl;
	return 0;
}
/*
	int g_x; //external linkage
	static ing g_x; //internal linkage
	const int g_x; // X

	extern int g_z;
	extern const int g_z;

	int g_y(1);
	static int g_y(1);
	const int g_y(1);

	extern int g_w(1);
	extern const int g_w(1);

*/