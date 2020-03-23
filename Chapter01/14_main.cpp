#include<iostream>
#include<algorithm>
using namespace std;

//매크로 코드에서 다음 것을 만날시 그냥 교체해버림.
#define MY_NUMBER 9
#define MY_STRING "Hello, World"

#define LIKE_APPLE

int main()
{
	cout << MY_NUMBER << endl;
	cout << MY_STRING << endl;
	cout << std::max(1 + 3, 2) << endl;
	
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE
	cout << "orange" << endl;
#endif
	return 0;
}