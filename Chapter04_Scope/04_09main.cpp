#include<iostream>
#include<vector>
#include<cstdint>
#include<string>
#include<utility>

int main()
{

	using namespace std;
	typedef double distance_t;// _t는 type 이름이다.. 라는 정도의 뜻
	

	std::int8_t i(97);// typedef로 정의된 것
	
	double		 my_distance;
	distance_t	 home2work;
	distance_t	 home2school;

	//사용 예제
	vector<pair<string, int >> pairlist;
	typedef vector<pair<string, int >> pairlist_t;

	pairlist_t pairlist2;

	//사용예제 2
	using pairlist_t = vector<pair<string, int>>;
	pairlist_t pairlist3;


	

	return 0;
}