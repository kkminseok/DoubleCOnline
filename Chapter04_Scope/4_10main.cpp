#include<iostream>
#include<string>
using namespace std;
/* �Ķ���Ͱ� �ʹ� ���� ���
void printPerson(double height,... )
{
    //...
}
*/

struct Person
{
	//���� �ʱ�ȭ�� �����ϴ�.
	double s_height;
	float s_weight; 
	int s_age;      
	string s_name;  

	void print()
	{
		cout << s_height << " " << s_weight << " " << s_age << " " << s_name << endl;
	}
};

//����ü �ȿ� ����ü�� ���� �� �ִ�.
struct Family
{
	Person me;
	Person mom;
	//....

};

void printPerson(Person _person)
{
	cout << _person.s_age << " " << _person.s_height << " " << _person.s_name << " " << _person.s_weight << endl;
}

//��ȯ������ �������� �ִ�.
Person getMe()
{
	Person me{ 1.1,2.2,3,"me" };

	return me;
}

int main()
{
	

	double height; //double height[100];
	float weight; // float weight[100];
	int age;
	string name;

	Person me;
	me.s_age = 20;
	me.s_name = "Jack Jack";
	me.s_height = 2.0;
	//.... 
	//�ֱ� �ʱ�ȭ ���

	Person me2{ 2.0,100.0,20,"jack jack" };
	printPerson(me2);
	me2.print();

	//�ܼ��� ��쿡�� �ȴ�.
	me2 = me;


}