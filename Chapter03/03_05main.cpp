#include<iostream>
#include<cmath>
#include<iomanip>
int main()
{
	using namespace std;

	int x, y;
	cin >> x >> y;
	cout << "Your input values are : " << x << " " << y << endl;

	if (x == y)
	{
		cout << "equal" << endl;
	}
	if (x != y)
	{
		cout << "Not equal" << endl;
	}
	if (x > y)
	{
		cout << "x is greater than y" << endl;
	}
	if (x >= y)
	{
		cout << "x is greater than y or equal to y" << endl;
	}
	if (x <= y)
		cout << "x is less than or equal to y" << endl;


	double d1(100 - 99.99); // 0.001
	double d2(10 - 9.99);//0.001

	cout <<std::setprecision(20)<< d1 << endl; //���� Ȯ��
	cout << d2 << endl;

	const double epsilon = 1e-10;//�׶��׶� �������� �ٸ���.
	if (std::abs(d1 - d2) < DBL_EPSILON)// ���� ���� ����.
		cout << "Approximately eqaul" << endl;
	else
		cout << "Not equal" << endl;
	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "Not equal" << endl;
		if (d1 > d2)cout << "d1 > d2" << endl;
		else cout << "d1 < d2" << endl;
	}

}