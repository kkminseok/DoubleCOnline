#include<iostream>
#include<string>
#include<limits>
int main()
{
	
	using namespace std;

	const string my_hello = "Hello, Wordld"; //����� ���� �ڷ��� 
	const string my_hello2("Hello,World2"); // ��ü ������
	const char my_strs[] = "Hello, World";

	cout << "Hello, World" << endl;
	
	cout << "Your name ? : ";
	string name;
	//cin >> name;
	std::getline(std::cin, name);
	
	cout << "Your age ? : ";
	string age;
	//	cin >> age;
	std::getline(std::cin, age);

	cout << name << " " << age << endl;
	cout << name << " " << age << endl;
	
	//���� ������
	std::cin.ignore(32767, '\n'); // '\n' ���������� 32767���� ���ڸ� �ؾ������ ��� �� 
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

	string a("Hello, ");
	string b("World");
	string hw = a + b;
	hw += "I'm good";
	cout << hw << endl;
	cout << hw.length() << endl;// ���� ���

	return 0;
}