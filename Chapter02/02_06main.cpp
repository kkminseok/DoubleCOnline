#include<iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	using namespace std;

	bool b1 = true;// or 1 copy initialization
	bool b2(false);// direct ''
	bool b3{ true };// uniform ''
	b3 = false;

	cout << b3 << endl;
	cout << b1 << endl<<endl;

	cout << std::boolalpha;
	cout << b3 << endl;
	cout << b1 << endl<<endl;
	
	cout << std::noboolalpha;
	cout << b3 << endl;
	cout << b1 << endl<<endl;

	cout << !true << endl;
	cout << !false << endl<<endl;

	cout << !b1 << endl;
	cout << !b2 << endl << endl;

	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl<<endl;

	cout << std::boolalpha;

	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;

	//if문
	if (true)
		cout << "This is true" << endl<<endl;

	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;

	if (5)
		cout << "This is true2" << endl << endl;

	/*bool input;
	cin >> input;//숫자로 입력해야함 컴파일러마다 다르게 인식하는 위험성이 있다.
	cout << "Your input : " << input << endl;
	
	cin.ignore(256,' ');
	*/

	//버퍼 지우기
	//연습문제
	//정수 하나를 입력받고 그 숫자가 홀수인지 짝수인지 출력하는 프로그램.
	cout << "input number";
	int example;
	cin >> example;
	example % 2 == 0 &&example!=0 ? cout << "짝수": cout << "홀수,아니면 0";
	

	return 0;
}