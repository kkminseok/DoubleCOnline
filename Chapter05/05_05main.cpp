#include<iostream>

int main()
{
	using namespace std;

	cout << "While - loop test" << endl;


	int count = 0;
	/*
		while (true) //���� loop
		{
			cout << count << endl;
		}
	*/
	while (count < 10)
	{
		cout << count << endl;
		++count;
		if (count == 5)break;

	}

	int outer_count = 1;
	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++<<" ";
		}

		cout << endl;
		++outer_count;
	}

	//������������ �ð������� �̹� �غ����� �����Ƿ� ����.


	return 0;
}