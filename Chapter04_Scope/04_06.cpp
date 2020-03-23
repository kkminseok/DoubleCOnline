#include<iostream>
#include<string>
#include<limits>
int main()
{
	
	using namespace std;

	const string my_hello = "Hello, Wordld"; //사용자 정의 자료형 
	const string my_hello2("Hello,World2"); // 객체 지향적
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
	
	//버퍼 날리기
	std::cin.ignore(32767, '\n'); // '\n' 만날때까지 32767개의 글자를 잊어버려라 라는 뜻 
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

	string a("Hello, ");
	string b("World");
	string hw = a + b;
	hw += "I'm good";
	cout << hw << endl;
	cout << hw.length() << endl;// 길이 출력

	return 0;
}