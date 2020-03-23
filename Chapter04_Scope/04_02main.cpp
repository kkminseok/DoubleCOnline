#include<iostream>
#include"MyHeader.h"
using namespace std;

//���� ����
int global = 123;

//���� ���� ����
static int global2 = 213; // �ٸ� cpp���Ͽ��� ������ �Ұ����ϴ�.


//���� ����
void doSomething()
{
	//
	static int a = 1;

	++a;
	cout << a << endl;
}

//forward declaration
/*extern ����*/void testdoSomething();
extern int a; //�ʱ�ȭ �Ұ����ϴ�.


int main()
{
	//���� ����
	int local = 1;
	cout <<"global "<< ::global <<"local "<< local << endl;

	doSomething();
	doSomething();
	testdoSomething();
	cout << a << endl;

	//extern�� �Ƚ��� �� �ּҰ� �ٸ���. �޸� ����� �̾�����.
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