#include<iostream>

//������ ���ϰ��� int�ΰ��� �˾Ƽ�
auto add(int x, int y) -> int //�ű��� ���� �ڵ� ������ ���Ⱑ ���� Ʈ���ϸ� ����Ÿ��
{
	//return x+ (double)y; ���� return���� double�� �ȴ�.
	return x + y;
}

int main()
{
	using namespace std;

	//�� �߷�
	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);



}