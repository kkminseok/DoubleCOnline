#include<iostream>

using namespace std;

void doSomething(int ex)
{
	ex = 123;
	cout << ex << endl;//#2 ex=123
}

int main()
{
	int x = 0;
	int y(0);

	//int x = 2; error
	cout << x << " " << &x << endl;
	{
		x = 2;
		cout << x << " " << &x << endl;
	}
	{
		int x = 3;
		cout << x << " " << &x << endl;
	}
	cout << x << " " << &x << endl;

	//��������

	int ex = 0;

	cout << ex << endl; //#1 ex=0
	doSomething(ex);
	cout << ex << endl;//#3 ex=0
	//�Լ��� �Ѿ�� ex�� ���� ���� ex�̴�. 
	

	return 0;
}