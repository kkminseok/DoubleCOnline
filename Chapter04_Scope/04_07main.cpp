#include<iostream>
#include<typeinfo>
#include<string>
enum Color // user-defined data type
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN // ',' �ĵ� �ǰ� ���ĵ� �ȴ�.
};//�����ݷ� �� ���ֱ�

//enum ���ǻ���
enum Feeling
{
	HAAPY,
	JOY,
	TIRED,
	BLUE, //���� enum�� ���� ��찡 ���� �� �ִ�. 
};


//����ϴ� ����
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
	//���α׷��Ӱ� �Ǽ��� �� ���ɼ��� �ֱ⿡ enum�� ���
}


int main()
{
	using namespace std;

	Color paint = COLOR_BLACK; //�ʱ�ȭ
	Color house(COLOR_BLUE);
	Color appe{ COLOR_RED };

	int color_id = COLOR_RED;
	//Color my_color = 3;
	//Color my_color = color_id;
	Color my_color = static_cast<Color>(3);

	//cin >> my_color; ���� ����� ���� ��ȸ�� ����.

	cout << paint << " " << COLOR_RED << endl;

	string str_input;

	std::getline(std::cin, str_input);

	//�������� �ʴ� ǥ����
	if (str_input == "COLOR_BLACK")
		cout << "no";
		//...

}