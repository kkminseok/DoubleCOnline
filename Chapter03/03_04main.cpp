#include<iostream>

int getPrice(int onSale)
{
	if (onSale)
		return 10;
	else
		return 100;
}

int main()
{
	using namespace std;

	//sizeof 연산자
	float a;
	cout << sizeof(float) << endl;;
	cout << sizeof a<<endl;

	//comma 연산자
	int x = 3;
	int y = 10;
	//앞에꺼를 계산하고, 뒤에꺼를 계산한 뒤 뒤에꺼가 들어감
	int z = (++x, ++y);
	//++x;
	//++y;
	//int z=y; 와 같음

	cout << x << " " << y << " " << z << endl;

	//comma 연산자 주의사항
	int co1 = 1, co2 = 10;//여기서 comma는 구분기호이다.
	int result;
	result = co1, co2;
	
	cout << result << endl;

	//conditional operator (arithmetric if)
	bool onSale = true;

	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;
	
	//만약 price값을 const로 지정하고 싶을 때 이때 유용하게 쓰인다.
	//단, 복잡할 경우는 쓰지말자.
	onSale = false;
	const int price2 = (onSale == true) ? 10 : 100;
	cout << price2 << endl;

	//또 다른 방법
	const int price3 = getPrice(onSale);
	cout << price3 << endl;

	

	

	return 0;
}