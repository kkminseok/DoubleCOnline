#include<iostream>
#include<bitset>
int main()
{
	using namespace std;

	//cin, cout 에서 사용하는 연산자와 다르다.
	// << left shift
	// >> right shift
	// ~, &, |, ^
	//unsigned를 사용하는게 일반적

	unsigned int a = 3;

	//a가 내부적으로 어떻게 표현되는지 보여줌
	cout << "-------------- left shift -----------------" << endl;
	cout << std::bitset<4>(a) << endl;
	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
	//left shift *2를 곱한거나 똑같다.
	unsigned int b = a << 2;
	cout << std::bitset<4>(b) <<" "<<b<< endl;

	//right shift
	cout << "-------------- right shift -----------------" << endl;
	unsigned int c = 1024;
	cout << std::bitset<16>(c) << endl;
	cout << std::bitset<16>(c >> 1) << " " << (c >> 1) << endl;
	cout << std::bitset<16>(c >> 2) << " " << (c >> 2) << endl;
	cout << std::bitset<16>(c >> 3) << " " << (c >> 3) << endl;
	cout << std::bitset<16>(c >> 4) << " " << (c >> 4) << endl;

	//bitwise not
	cout << "-------------- bitwise not -----------------" << endl;
	cout << std::bitset<16>(~c) << " " << (~c) << endl;


	cout << "-------------- 2bit  -----------------" << endl;
	unsigned int bi1 = 0b1100;
	unsigned int bi2 = 0b0110;

	cout << bi1 << " " << bi2 << endl;

	//bitwise and
	cout << "-------------- bitwise and -----------------" << endl;
	cout << std::bitset<4>(bi1&bi2) << endl;
	cout << std::bitset<4>(bi1 | bi2) << endl;
	cout << std::bitset<4>(bi1^bi2) << endl;

	//bi1 &= bi2; 가능

	//Quiz
	//1. 0110>>2 -> decimal  W = 0001 decimal = 1
	unsigned ex1 = 0b0110;
	cout << "-------------- Quiz -----------------" << endl;
	cout <<(ex1 >> 2) << endl;
	
	//2. 5 | 12 -> decimal W = 13  0101 | 1100 -> 1101 = decimal 13
	cout << (5 | 12) << endl;

	//3. 5 & 12 -> decimal W = 4 0101 & 1100 -> 0100 = decimal 4
	cout << (5 & 12) << endl;

	//4. 5^ 12 -> decimal W = 9 0101 ^ 1100 -> 1001 = decimal 9
	cout << (5 ^ 12) << endl;

	return 0;
}