#include<iostream>//cout,cin, endl, ...
#include<cstdio>// printf


int main()
{
	int x = 1024;
	double pi = 3.141592;

	std::cout << "I love this lecture ! ";// std::endl;
	std::cout << "x is " << x << "pi is " << pi << std::endl;
	
	//t �� ���� ������ tap�� �ǹ�  \n �� new line �ٹٲ� �ǹ�
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	//�����Ϸ��� std�� ���ӽ����̽��� �˾Ƽ� ã����.
	using namespace std;
	cout << "hi" << endl;
	
	// \a�� audio�� ���� �Ҹ��� ���.
	cout << "\a";

	int input=3;
	cout << "Before your input, input was : " << input << std::endl;
	
	//���� ū ���ڸ� ���� �� int�� ������ max���� ���� 2147836.....
	cin >> input;

	cout << "Your input is " << input << std::endl;




	return 0;

}