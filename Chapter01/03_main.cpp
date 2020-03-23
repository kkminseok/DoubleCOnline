#include<iostream>

int main()
{
	//x는 변수명
	int x = 123;

	int y;
	//assignment operation 대입 y라는 변수에 123을 대입
	y = 123; 

	std::cout << y << std::endl;
	//&는 엠퍼센드, 메모리 주소를 표현하라는 기호
	std::cout << &y << std::endl;

	//L-values, R-values 
	//메모리 주소를 가지고 있는게 L, 임시 메모리를 가지고 있는 것 R-values
	//y(L)=123(R);
	//x=x+2; 
	//오른쪽에 있는 x는 변수가 아니고 값이 대입되서 R-values값임.
	
	//int c;
	//std::cout<<c<<std::endl;  런타임 에러 - 변수 c가 초기화되지 않음.
	
	int c(123);
	std::cout << c << std::endl;

	//복습 자료
	
	int k = 1;
	k = k + 2;
	std::cout << k << std::endl; // k=3

	int z = k;
	std::cout << z << std::endl; // #1 z=3;

	//is ( k + z ) l-value or r-value ? 
	std::cout << k + z << std::endl; // r-value : 이유는 임시 저장소에 위치를 가지기 때문

	std::cout << k << std::endl;// #4 k=3;

	int zz;
	std::cout << zz << std::endl;  //#5 컴파일 에러 초기화되지 않은 값


	

	
	return 0;
}