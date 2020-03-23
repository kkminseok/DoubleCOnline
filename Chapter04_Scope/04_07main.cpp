#include<iostream>
#include<typeinfo>
#include<string>
enum Color // user-defined data type
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN // ',' 쳐도 되고 안쳐도 된다.
};//세미콜론 꼭 쳐주기

//enum 주의사항
enum Feeling
{
	HAAPY,
	JOY,
	TIRED,
	BLUE, //위의 enum과 같은 경우가 있을 수 있다. 
};


//사용하는 이유
int computeDamage(int weapon_id)
{
	if (weapon_id == 0) //sword
	{
		return 1;
	}
	if (weapon_id == 1)//hammer
	{
		return 2;
	}
	//....
	//프로그래머가 실수를 할 가능성이 있기에 enum을 사용
}


int main()
{
	using namespace std;

	Color paint = COLOR_BLACK; //초기화
	Color house(COLOR_BLUE);
	Color appe{ COLOR_RED };

	int color_id = COLOR_RED;
	//Color my_color = 3;
	//Color my_color = color_id;
	Color my_color = static_cast<Color>(3);

	//cin >> my_color; 위의 방식을 토대로 우회는 가능.

	cout << paint << " " << COLOR_RED << endl;

	string str_input;

	std::getline(std::cin, str_input);

	//권장하지 않는 표현식
	if (str_input == "COLOR_BLACK")
		cout << "no";
		//...

}