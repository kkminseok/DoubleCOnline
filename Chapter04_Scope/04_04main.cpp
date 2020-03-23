#include<iostream>

//어차피 리턴값은 int인것을 알아서
auto add(int x, int y) -> int //신기한 문법 코드 정리시 보기가 편함 트레일링 리턴타입
{
	//return x+ (double)y; 가능 return값은 double이 된다.
	return x + y;
}

int main()
{
	using namespace std;

	//형 추론
	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);



}