#include<iostream>
#include"my_constHeader.h"
using namespace std;
void printNumber(const int& my_number)//my_number ���� �Ұ���
{
	//�Լ������� �Ķ���� ���� �ٲٴ°��� ��������.
	cout << my_number << endl;
}

int main()
{

	const double gravity{ 9.8 }; //�ݵ�� �ʱ�ȭ ������Ѵ�.
	//double const gravity{9.8} ; ���� ��ȣ ������ �ʴ´�.
	//gravity = 1.2; ���� �Ұ���

	printNumber(123);
	
	int number;
	cin >> number;

	//��Ÿ�ӿ��� ���� �����ȴ�. ������ �� �����Ǵ°� �ƴ�.
	const int speical_number(number);

	//speical_number�� ������ �Ұ���
	number = 123;

	//c++17 constexpr ������Ÿ�� �� �����Ǵ� ������ ���� ���
	constexpr int my_const(123);
	//constexprt int special_number(number); �Ұ���

	//const ���Ƴ־ ���� ����

	double radius;
	cin >> radius;
	double circumference = 2.0*radius*constants::pi;
	cout << circumference << endl;

	


	return 0;
}