#include<iostream>
#include<cmath>// pow
#include<limits>

int main()
{
	using namespace std;

	short s		= 1;	//2 bytes = 2 * 8 bits = 16 bits
	int i		= 1;
	long l		= 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	cout << std::pow(2, sizeof(short) * 8-1)-1 << endl; //signed short�� ǥ���� �� �ִ� �ִ� ��
	cout << std::numeric_limits<short>::max() << endl;// signed short ǥ�� �ִ�
	cout << std::numeric_limits<short>::min() << endl;// signed short ǥ�� �ּڰ�
	cout << std::numeric_limits<short>::lowest() << endl;// signed short ǥ�� �ּڰ�
	
	//�����÷ο� 
	
	s = 32767;
	s = s + 1;//32768 

	cout << "�����÷ο� "<<s << endl;

	s = std::numeric_limits<short>::min();

	s = s - 1;
	cout << " " << s << endl;
	
	cout << 22 / 4 << endl;


}