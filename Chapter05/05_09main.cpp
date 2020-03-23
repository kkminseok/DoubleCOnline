#include<iostream>
#include<cstdlib> //std::radn(), std::srand()
#include<ctime> //std::time()
#include<random>// c++ 11����
using namespace std;


//���� ���� ����
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

	//std::srand(5324); //seed �������� �ٲ�����Ѵ�.
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
	std::mt19937_64 messenne(rd());//64��Ʈ ����¥�� ����
	std::uniform_int_distribution<> dice(1, 6); //1���� 6���� �������� Ȯ���� �����ϴ�

	for (int count = 1; count <= 20; ++count)
		cout << dice(messenne) << endl;
	return 0;
}