#include<iostream>
#include<vector>
#include<cstdint>
#include<string>
#include<utility>

int main()
{

	using namespace std;
	typedef double distance_t;// _t�� type �̸��̴�.. ��� ������ ��
	

	std::int8_t i(97);// typedef�� ���ǵ� ��
	
	double		 my_distance;
	distance_t	 home2work;
	distance_t	 home2school;

	//��� ����
	vector<pair<string, int >> pairlist;
	typedef vector<pair<string, int >> pairlist_t;

	pairlist_t pairlist2;

	//��뿹�� 2
	using pairlist_t = vector<pair<string, int>>;
	pairlist_t pairlist3;


	

	return 0;
}