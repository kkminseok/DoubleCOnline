#include<iostream>
#include<string>
using namespace std;
/* 파라미터가 너무 많은 경우
void printPerson(double height,... )
{
    //...
}
*/

struct Person
{
	//직접 초기화도 가능하다.
	double s_height;
	float s_weight; 
	int s_age;      
	string s_name;  

	void print()
	{
		cout << s_height << " " << s_weight << " " << s_age << " " << s_name << endl;
	}
};

//구조체 안에 구조체를 넣을 수 있다.
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

//반환형으로 넣을수도 있다.
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
	//최근 초기화 방법

	Person me2{ 2.0,100.0,20,"jack jack" };
	printPerson(me2);
	me2.print();

	//단순한 경우에만 된다.
	me2 = me;


}