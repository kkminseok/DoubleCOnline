#include<iostream>

int main()
{
	//x�� ������
	int x = 123;

	int y;
	//assignment operation ���� y��� ������ 123�� ����
	y = 123; 

	std::cout << y << std::endl;
	//&�� ���ۼ���, �޸� �ּҸ� ǥ���϶�� ��ȣ
	std::cout << &y << std::endl;

	//L-values, R-values 
	//�޸� �ּҸ� ������ �ִ°� L, �ӽ� �޸𸮸� ������ �ִ� �� R-values
	//y(L)=123(R);
	//x=x+2; 
	//�����ʿ� �ִ� x�� ������ �ƴϰ� ���� ���ԵǼ� R-values����.
	
	//int c;
	//std::cout<<c<<std::endl;  ��Ÿ�� ���� - ���� c�� �ʱ�ȭ���� ����.
	
	int c(123);
	std::cout << c << std::endl;

	//���� �ڷ�
	
	int k = 1;
	k = k + 2;
	std::cout << k << std::endl; // k=3

	int z = k;
	std::cout << z << std::endl; // #1 z=3;

	//is ( k + z ) l-value or r-value ? 
	std::cout << k + z << std::endl; // r-value : ������ �ӽ� ����ҿ� ��ġ�� ������ ����

	std::cout << k << std::endl;// #4 k=3;

	int zz;
	std::cout << zz << std::endl;  //#5 ������ ���� �ʱ�ȭ���� ���� ��


	

	
	return 0;
}