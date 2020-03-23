#include<iostream>
#include<cstdlib> //std::radn(), std::srand()
#include<ctime> //std::time()
#include<random>// c++ 11부터
using namespace std;


//난수 생성 원리
unsigned int PRNG()
{
	static unsigned int seed = 5523;//seed number
	seed = 825728 * seed + 2312323;

	return seed % 32768;
}
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1)*(std::rand() * fraction));
}

int main()
{

	//std::srand(5324); //seed 고정값을 바꿔줘야한다.
	std::srand(static_cast<unsigned int>(std::time(0)));
	for (int count = 1; count <= 100; ++count)
	{
		//cout << getRandomNumber(5, 8) << "\t";

		cout << rand() % 4 + 5 << "\t";
		//cout << std::rand() << "\t";

		if (count % 5 == 0) cout << endl;
	}
	//c++11
	std::random_device rd;
	std::mt19937_64 messenne(rd());//64비트 난수짜리 생성
	std::uniform_int_distribution<> dice(1, 6); //1에서 6사이 난수생성 확률은 동일하다

	for (int count = 1; count <= 20; ++count)
		cout << dice(messenne) << endl;
	return 0;
}