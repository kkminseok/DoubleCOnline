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

	//������ ǥ�� class enum�� ���� ����
	/*
	if (color == fruit)
	{
		cout << "equal" << endl;
	}
	*/
}