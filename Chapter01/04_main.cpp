#include<iostream>//cout,cin, endl, ...
#include<cstdio>// printf


int main()
{
	int x = 1024;
	double pi = 3.141592;

	std::cout << "I love this lecture ! ";// std::endl;
	std::cout << "x is " << x << "pi is " << pi << std::endl;
	
	//t 는 줄을 맞춰줌 tap을 의미  \n 은 new line 줄바꿈 의미
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	//컴파일러가 std란 네임스페이스를 알아서 찾아줌.
	using namespace std;
	cout << "hi" << endl;
	
	// \a는 audio의 약자 소리를 출력.
	cout << "\a";

	int input=3;
	cout << "Before your input, input was : " << input << std::endl;
	
	//아주 큰 숫자를 넣을 시 int형 정수의 max값이 나옴 2147836.....
	cin >> input;

	cout << "Your input is " << input << std::endl;




	return 0;

}