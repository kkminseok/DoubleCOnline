#include<iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
	int count(12345);
}

namespace b
{
	int my_var(20);
	int my_b(456);
}


int main()
{
	using namespace std;
	//using std::cout;
	//using std::endl;

	
	{
		using namespace a;
		cout << my_var << endl;
		cout << a::count << endl;//std속에 count가 있기 때문에 a:: 해줘야한다.
	}
	{
		using namespace b;
		cout << my_var << endl;
	}
	
	using namespace a;
	using namespace b;


	cout << a::my_var << endl;
	cout << b::my_var << endl;
	cout << my_a << endl;
	cout << my_b << endl;
	cout << "hello" << endl;
}