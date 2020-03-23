#include<iostream>

int pow(int base, int exponet)
{
	int result = 1;

	for (int count = 0; count < exponet; ++count)
		result *= base;

	return result;
}

int main()
{
	using namespace std;
	int x = 0;

	cout << pow(2, 4) << endl;
	for (int count = 0; count < 10; ++count)
	{
		cout << count << endl;
	}
	for (; x < 10; ++x)
	{
		cout << x << endl;
	}
	/*무한 루프
	for (;; ++x)
	{
		cout << x << endl;
	}
	*/

	for (int i = 0, j = 0; (i + j) < 10; ++i, j += 2)
	{
		cout << i << " " << j << endl;
	}
	
	//연습문제 : 구구단 출력 
	for (int i = 1; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
			cout << i << " * " << j <<" = "<< i * j << endl;
	}

	return 0;
}