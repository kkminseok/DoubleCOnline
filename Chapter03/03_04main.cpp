#include<iostream>

int getPrice(int onSale)
{
	if (onSale)
		return 10;
	else
		return 100;
}

int main()
{
	using namespace std;

	//sizeof ������
	float a;
	cout << sizeof(float) << endl;;
	cout << sizeof a<<endl;

	//comma ������
	int x = 3;
	int y = 10;
	//�տ����� ����ϰ�, �ڿ����� ����� �� �ڿ����� ��
	int z = (++x, ++y);
	//++x;
	//++y;
	//int z=y; �� ����

	cout << x << " " << y << " " << z << endl;

	//comma ������ ���ǻ���
	int co1 = 1, co2 = 10;//���⼭ comma�� ���б�ȣ�̴�.
	int result;
	result = co1, co2;
	
	cout << result << endl;

	//conditional operator (arithmetric if)
	bool onSale = true;

	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;
	
	//���� price���� const�� �����ϰ� ���� �� �̶� �����ϰ� ���δ�.
	//��, ������ ���� ��������.
	onSale = false;
	const int price2 = (onSale == true) ? 10 : 100;
	cout << price2 << endl;

	//�� �ٸ� ���
	const int price3 = getPrice(onSale);
	cout << price3 << endl;

	

	

	return 0;
}