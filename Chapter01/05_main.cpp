#include<iostream>

using namespace std;

//return �ڷ����� ������ �ڷ����� ���ƾ���. 
int mutilplyTwoNumbers(int a, int b)
{
	int sum = a * b;

	return sum;
}

void printHelloworld()
{
	cout << "Hello, World!" << endl;

	return;

	cout << "Hello, World! 2" << endl;
}

int addTwoNumbers(int a, int b)
{
	printHelloworld();
	return a + b;
	
}
int Example_add(int x, int y)
{
	return x + y;
}

void Example_NewVersion()
{
	int x, y;
	cin >> x >> y;
	cout << x + y << endl;
}

int main()
{
	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;
	cout << mutilplyTwoNumbers(1, 2) << endl;
	cout << mutilplyTwoNumbers(3, 4) << endl;
	cout << mutilplyTwoNumbers(8, 13) << endl;
	
	//������ �޶��� ��� �Ź� ������ �ϳ��� �������ִ� �������� ����.
	//-> �Լ��� �ʿ��� ���� 1
	
	printHelloworld();
	int sum = addTwoNumbers(1, 2);
	
	cout << sum << endl;

	//��������
	
	int ex, ey;
	cin >> ex >> ey;
	cout << Example_add(ex, ey) << endl;

	Example_NewVersion();
	Example_NewVersion();
	Example_NewVersion();
	Example_NewVersion();

	
	
	
}