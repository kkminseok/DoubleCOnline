#include<iostream>

int main()
{
	using namespace std;

	cout << "While - loop test" << endl;


	int count = 0;
	/*
		while (true) //무한 loop
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

	//연습문제들은 시간부족과 이미 해본적이 있으므로 생략.


	return 0;
}