#include<iostream>
#include"MyHeader.h"
extern int a = 1233;

void testdoSomething()
{
	using namespace std;

	cout << "Hello" << endl;
	cout << "In test.cpp file" << Constants::pi<<" "<<&Constants::pi << endl;
}