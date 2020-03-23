#include<iostream>
#include<bitset>

int main()
{
	// 주소보는 코드
	using namespace std;

	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;

	//int 생략 가능
	unsigned b = 3;

	//기본 타입들  + 초기화 방법

	bool bValue = false;// or true
	char chValue = 'A';
	float fvalue = 3.141592f; //f를 빼면 double로 인식해서 더 큰 자료형인 double을 float에 대입하는거나 마찬가지라서 오류가 뜬다.
	double dvalue = 3.141592;
	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	cout << (bValue ? 1 : 0 )<< endl;

	bValue = true;

	cout << (bValue ? 1 : 0) << endl;

	cout << chValue << endl;
	cout << (int)chValue << endl;

	cout << fvalue << endl;
	cout << dvalue << endl;

	cout << aValue << endl;
	cout << aValue2 << endl;
	
	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;
	
	cout << sizeof(bool) << endl;
	cout << sizeof(bValue) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;
	
	int abc(123);// direct initialization 객체 지향적
	//int abc(3.14)  warning이 뜸 내부적으로 3으로 저장함(캐스팅)
	
	int abc3{ 123 };// uniform initialization 객체 지향적  알아두자.
	//int abc3{4.5} ; //error가 뜸 direct initialization 보다 좀 더 엄격하다.
	int abc2 = 3;//copy initialization  

	//int k,l,m ....; 가능 같은 데이터형이어야한다.

	//int k,l,m=3; 가능하지만 권장하지는 않는다.


	
	




}
