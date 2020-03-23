#include<iostream>
#include<limits>
int main()
{
	using namespace std;

	char c1(65);
	char c2('A');// 문자열 표현 "Hello, World" or std::string
	
	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	
	//c-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	//c++-style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;//변수를 넣어도 된다.
	cout << ch << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;//명시적임

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	char li(65);

	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	cout << int('\n') <<"   "<< int('\t')<<endl;
	cout << "This is first line\n\tsecond line\n";
	cout << "This is first line" << endl;
	cout << "second line";

	std::cout << "Hello,\u0444!\n";//유니코드

	//연습문제 생략



	return 0;
}