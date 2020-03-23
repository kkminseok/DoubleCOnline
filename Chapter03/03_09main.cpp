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
	

	//�ǿ� ���� glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

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

	//��������
	//1. ���� ��쿡 ���� �÷��׸� �ٲ㺸����.
	// - ��縦 ���� ��
	// - ����� ���ƿ並 Ŭ������ ��
	// - ����� ���ƿ並 �ٽ� Ŭ������ ��
	// - �� ��縸 ������ ��

	unsigned char option_viewed = 0x01;
	unsigned char option_edited = 0x02;
	unsigned char option_liked = 0x04;
	unsigned char option_shared = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char my_article_flags = 0;

	//code here

	//��縦 ���� ��

	my_article_flags |= option_viewed;
	cout << endl << "��������" << endl;
	cout<<bitset<8>(my_article_flags) << endl;

	//����� ���ƿ並 Ŭ������ ��
	my_article_flags |= option_liked;
	cout << bitset<8>(my_article_flags) << endl;

	//����� ���ƿ並 �ٽ� Ŭ������ ��
	my_article_flags ^= option_liked;
	cout << bitset<8>(my_article_flags) << endl;
	my_article_flags ^= option_liked;
	cout << bitset<8>(my_article_flags) << endl;

	//�� ��縸 ������ ��
	my_article_flags &= option_deleted;
	cout << bitset<8>(my_article_flags) << endl;

	//2. �Ʒ� �� ���� �� �����ϰ� �۵��ϴ��� �����غ�����.
	// myflags &= ~(option4 | option5) ;
	// myflags &= ~option4 & ~option5;
	//��𸣰� ��Ģ�� ���� �����ϰ� �۵��Ѵ�.
	//Ȯ��

	unsigned char myflags = 0b0000;
	unsigned char option4 = 0b1010;
	unsigned char option5 = 0b0110;
	
	//���� �� 
	cout << endl<<bitset<8>(option4 | option5) << endl;
	cout  << bitset<8>(~(option4 | option5)) << endl;

	//���� ��
	cout << bitset<8>(~option4) << " " << bitset<8>(~option5) <<" "<<bitset<8>(~(option4 | option5)) << endl;
	

	


	return 0;
}