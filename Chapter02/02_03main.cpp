#include<iostream>
//#include<cstdint> iostream�ȿ� �ִ�.

int main()
{
	using namespace std;

	std::int16_t i(5);//2 byte¥�� �����ͷ� �ٲ���.
	std::int8_t myint = 65;// 1 byte¥�� ���콺�� ���������� ������ Ÿ���� char�̴�.

	cout << myint << endl;

	std::int_fast8_t fi(5);// int�� ������ Ÿ���� ���� ���� �ڷ��� - char
	std::int_least64_t fl(5);// int�� ������ Ÿ���� �ּ� 64��Ʈ�� ������ ������ - long long int

}