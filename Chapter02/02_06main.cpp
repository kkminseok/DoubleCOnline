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

	//if��
	if (true)
		cout << "This is true" << endl<<endl;

	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;

	if (5)
		cout << "This is true2" << endl << endl;

	/*bool input;
	cin >> input;//���ڷ� �Է��ؾ��� �����Ϸ����� �ٸ��� �ν��ϴ� ���輺�� �ִ�.
	cout << "Your input : " << input << endl;
	
	cin.ignore(256,' ');
	*/

	//���� �����
	//��������
	//���� �ϳ��� �Է¹ް� �� ���ڰ� Ȧ������ ¦������ ����ϴ� ���α׷�.
	cout << "input number";
	int example;
	cin >> example;
	example % 2 == 0 &&example!=0 ? cout << "¦��": cout << "Ȧ��,�ƴϸ� 0";
	

	return 0;
}