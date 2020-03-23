#include<iostream>
#include<bitset>

using namespace std;
int main()
{
	

	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	//event !
	item1_flag = true;

	//die! item2 los
	item2_flag = false;

	if (item3_flag == true)
	{
		//event
	}
	
	//....
	
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	//....

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	
	cout <<"No item" << bitset<8>(items_flag) << endl;

	//item0 on
	items_flag |= opt0; 
	cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

	//item3 on
	items_flag |= opt3;
	cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

	//item3 los
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl;

	//has item1 ?
	if (items_flag & opt1)
	{
		cout << "Has item1" << endl;
	}
	else
		cout << "Hasn't item1" << endl;

	//obtain item 2, 3
	items_flag |= (opt2 | opt3);
	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item 2,3 obtained " << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= opt2;
		items_flag ^= opt1;
	}
	cout << bitset<8>(items_flag) << endl;
	

	//실용 예제 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	cout << bitset<32>(red_mask) << endl;
	cout << bitset<32>(green_mask) << endl;
	cout << bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xDAA520;

	cout << bitset<32>(pixel_color) << endl;
	//
	unsigned char green;
	unsigned char blue;
	unsigned char red;

	blue = pixel_color & blue_mask;
	cout <<"blue "<< bitset<8>(blue) <<" "<<int(blue)<< endl;
	green = pixel_color & green_mask>>8;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
	red = pixel_color & red_mask >> 16;
	cout << "red " << bitset<8>(red) << " " << int(red) << endl;

	//연습문제
	//1. 다음 경우에 대해 플래그를 바꿔보세요.
	// - 기사를 봤을 때
	// - 기사의 좋아요를 클릭했을 때
	// - 기사의 좋아요를 다시 클릭했을 때
	// - 본 기사만 삭제할 때

	unsigned char option_viewed = 0x01;
	unsigned char option_edited = 0x02;
	unsigned char option_liked = 0x04;
	unsigned char option_shared = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char my_article_flags = 0;

	//code here

	//기사를 봤을 때

	my_article_flags |= option_viewed;
	cout << endl << "연습문제" << endl;
	cout<<bitset<8>(my_article_flags) << endl;

	//기사의 좋아요를 클릭했을 때
	my_article_flags |= option_liked;
	cout << bitset<8>(my_article_flags) << endl;

	//기사의 좋아요를 다시 클릭했을 때
	my_article_flags ^= option_liked;
	cout << bitset<8>(my_article_flags) << endl;
	my_article_flags ^= option_liked;
	cout << bitset<8>(my_article_flags) << endl;

	//본 기사만 삭제할 때
	my_article_flags &= option_deleted;
	cout << bitset<8>(my_article_flags) << endl;

	//2. 아래 두 줄이 왜 동일하게 작동하는지 설명해보세요.
	// myflags &= ~(option4 | option5) ;
	// myflags &= ~option4 & ~option5;
	//드모르간 법칙에 의해 동일하게 작동한다.
	//확인

	unsigned char myflags = 0b0000;
	unsigned char option4 = 0b1010;
	unsigned char option5 = 0b0110;
	
	//위의 식 
	cout << endl<<bitset<8>(option4 | option5) << endl;
	cout  << bitset<8>(~(option4 | option5)) << endl;

	//밑의 식
	cout << bitset<8>(~option4) << " " << bitset<8>(~option5) <<" "<<bitset<8>(~(option4 | option5)) << endl;
	

	


	return 0;
}