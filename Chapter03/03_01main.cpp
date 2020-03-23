#include<iostream>

using namespace std;

int main()
{
	int x = 4 + 2 * 3; 
	int y = 3 * 4 / 2;
	int c = 3 ^ 2;
	cout << c << endl;

	//연습문제
	//연산자의 우선순위와 결합법칙이 어떻게 적용되는지 맞추기
	//Q1 r= 1+2+3*4
	//W1 r의값은 15이고 r= (1+(2+(3*4)))과 같다 +가 *보다 우선순위가 낮다. 두 연산자 모두 right->left 결합법칙을 갖고 있다.
	cout << 1 + 2 + 3 * 4 << endl;
	cout << (1 + (2 + (3 * 4))) << endl;

	//Q2 a=b=c
	//W2 (a=(b=c)) 와같다. =연산자의 결합법칙이right->left이기 때문

	//Q3 t/= --w +5
	//W3 (t/= ((--w) + 5))) /=연산자와 --(단항)연산자만 right->left 결합법칙을 가짐.
	int t = 100;
	int w = 5;
	t /= --w + 5;
	cout << t << endl; //9
	
	//Q4 a||b && c||d
	//W4 ((a||b) && (c||d))에서 a||b이 거짓일 경우 c||d는 거치지않고 false를 반환



	return 0;
}