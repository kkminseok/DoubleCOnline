#include<iostream>

int main()
{
	using namespace std;

	//logcial NOT  false -> true true -> false

	bool x = true;
	cout << !x << endl;

	//logical AND �� �� true�� �� true

	bool y = false;

	cout << (x && y) << endl;
	
	//logcial OR �ϳ��� true�� �� true
	
	cout << (x || y) << endl;
	
	int v = 1;
	if (v == 0 || v == 1)
		cout << "v is 0 or 1" << endl;
	
	//short circuit evaluation
	int r = 1;
	//int r =2; // ������ �켱������ ���� ������� �޶���. �ǵ������� �ۼ��ϱ⵵ �Ѵ�.
	int w = 2;

	if (r == 1&&w++ == 2)
	{
		//do something
	}
	cout << w << endl;
	
	//De Morgan's Law
	bool de = true;
	bool de2 = false;

	!(de&&de2);
	!de && !de2;
	//���� �ΰ��� �ٸ���.


	//XOR
	//false false -> false
	//false true -> true
	//true false -> true
	//true true -> false

	//if(x != y) ~
	//cout<<( x != y )<<endl;

	//��������
	//1. (true && true) || false  W = true
	cout << std::boolalpha << endl;
	cout << ((true && true) || false) << endl;
	// true || false -> true

	//2. (false && true) || true  W = true
	cout << ((false && true) || true) << endl;
	// false || true -> true

	//3. (false && true) || false || true W = true
	cout << ((false && true) || false || true) << endl;
	// false || false || true -> false || true -> true

	//4. (14 > 13 || 2 > 1) && ( 9 > 1 ) W = true
	cout << ((14 > 3 || 2 > 1) && (9 > 1)) << endl;
	// true || true && true -> true && true ->true

	//5. !(2314123 > 2 || 123123>2387) W = false
	cout << !(2314123 > 2 || 123123 > 2387) << endl;
	// !(true || true) -> !(true) -> false


	bool ex1 = true;
	bool ex2 = false;
	bool ex3 = false;
	
	bool re1 = ex1 || ex2 && ex3;
	bool re2 = (ex1 || ex2) && ex3;
	bool re3 = ex1 || ( ex2 && ex3 ); // re1�� ���� &&�� �켱������ �� ����.

	cout << re1 << endl;
	cout << re2 << endl;
	

}