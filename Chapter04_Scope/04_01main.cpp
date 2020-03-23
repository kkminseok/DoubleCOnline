#include<iostream>

namespace work1
{
	
	namespace work11
	{
		namespace work111
		{

		}
	}
	int a = 1;
	void doSomething()
	{
		a += 2;
	}
}
//c++17 
namespace work2::work22::work222
{
	int a = 2;
	void doSomething()
	{
		a += 5;
	}
}
int main()
{
	using namespace std;

	int apple = 5;
	{
		int apple = 1;// No
		cout << apple << endl;
	}
	cout << apple << endl;

	work1::a;
	work1::doSomething();
	//c++17ÀÌÈÄ
	work2::work22::work222::doSomething();
}