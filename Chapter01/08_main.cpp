#include<iostream>

using namespace std;

int main()
{
	int x = 2;// x is a variables, �޸��ּ� ������ ����. 2 is a literal.

	cout << "Hello, World" << endl;//���ڿ��� ���ͷ� ���
	cout << 1 + 2 << endl;// 1�� 2�� ���ͷ�

	int y = (x > 0) ? 1 : 2;
	//x�� 0���� ũ�� y�� 1�� ����, ũ�������� y�� 2�� ����.

	cout << y << endl;

	x = -2;
	y = (x > 0) ? 1 : 2;

	cout << y << endl;


	return 0;
}