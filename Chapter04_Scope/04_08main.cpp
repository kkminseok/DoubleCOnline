//c++ 11
#include<iostream>

int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	//문제의 표현 class enum을 통한 수정
	/*
	if (color == fruit)
	{
		cout << "equal" << endl;
	}
	*/
}