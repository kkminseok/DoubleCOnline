#include<iostream>
#include<bitset>

int main()
{
	// �ּҺ��� �ڵ�
	using namespace std;

	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;

	//int ���� ����
	unsigned b = 3;

	//�⺻ Ÿ�Ե�  + �ʱ�ȭ ���

	bool bValue = false;// or true
	char chValue = 'A';
	float fvalue = 3.141592f; //f�� ���� double�� �ν��ؼ� �� ū �ڷ����� double�� float�� �����ϴ°ų� ���������� ������ ���.
	double dvalue = 3.141592;
	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	cout << (bValue ? 1 : 0 )<< endl;

	bValue = true;

	cout << (bValue ? 1 : 0) << endl;

	cout << chValue << endl;
	cout << (int)chValue << endl;

	cout << fvalue << endl;
	cout << dvalue << endl;

	cout << aValue << endl;
	cout << aValue2 << endl;
	
	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;
	
	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;
	
	int abc(123);// direct initialization ��ü ������
	//int abc(3.14)  warning�� �� ���������� 3���� ������(ĳ����)
	
	int abc3{ 123 };// uniform initialization ��ü ������  �˾Ƶ���.
	//int abc3{4.5} ; //error�� �� direct initialization ���� �� �� �����ϴ�.
	int abc2 = 3;//copy initialization  

	//int k,l,m ....; ���� ���� ���������̾���Ѵ�.

	//int k,l,m=3; ���������� ���������� �ʴ´�.


	
	




}
