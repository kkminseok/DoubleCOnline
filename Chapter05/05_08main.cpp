#include<iostream>

using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;
		if (ch == 'r')
			return ;
	}
	cout << "Hello" << endl;
}
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
		if (i == 5)break;

	}

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0) continue;

		cout << i << endl;
	}

	int count(0);
	//���ѷ��� ������
	do
	{
		if (count == 5)
			continue;

		cout << count << endl;
		count++;
	} while (count < 10);
	//���� : while(++count<10);


	//break�� �־ �����غ���
	int count2(0);
	//bool escape_flag = false;

	while (true)
	{
		char ch;
		cin >> ch;

		

		if (ch == 'x')
			break;  //escape_flag = true;
		cout << " " << count++ << endl;
	}


	//breakOrReturn(); //���ѷ���
	return 0;
}