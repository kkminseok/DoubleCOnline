#include<iostream>

using namespace std;

//return 자료형과 선언의 자료형은 같아야함. 
int mutilplyTwoNumbers(int a, int b)
{
	int sum = a * b;

	return sum;
}

void printHelloworld()
{
	cout << "Hello, World!" << endl;

	return;

	cout << "Hello, World! 2" << endl;
}

int addTwoNumbers(int a, int b)
{
	printHelloworld();
	return a + b;
	
}
int Example_add(int x, int y)
{
	return x + y;
}

void Example_NewVersion()
{
	int x, y;
	cin >> x >> y;
	cout << x + y << endl;
}

int main()
{
	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;
	cout << mutilplyTwoNumbers(1, 2) << endl;
	cout << mutilplyTwoNumbers(3, 4) << endl;
	cout << mutilplyTwoNumbers(8, 13) << endl;
	
	//수식이 달라질 경우 매번 수식을 하나씩 수정해주는 불편함이 있음.
	//-> 함수가 필요한 이유 1
	
	printHelloworld();
	int sum = addTwoNumbers(1, 2);
	
	cout << sum << endl;

	//연습문제
	
	int ex, ey;
	cin >> ex >> ey;
	cout << Example_add(ex, ey) << endl;

	Example_NewVersion();
	Example_NewVersion();
	Example_NewVersion();
	Example_NewVersion();

	
	
	
}