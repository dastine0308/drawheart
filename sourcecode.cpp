#include <iostream> 
#include <cmath>
#include <stdlib.h>
using namespace std;


void print(int a, int b,int c)//用公式代入a,b,c 
{
	int i;
	for (i = 0; i < c; i++)//用三角函數的公式輸出空白圖曲線 
	{
		cout << " ";
	}
	//輸出空白即輸出
	cout << "*   *"; 
	
	//用三角函數的公式輸出酒杯裡的 
	for (i = 0; i < a; i++)
	{
		cout << ".";//酒杯左半邊 
	}
	
	{
		for (i = 0; i < b; i++) 
		{
			cout << ".";//酒杯右半邊 
		}
	}
	//輸出完圖形即輸出
	cout << "*   *";
}

void wait(int s)//畫面動的速度 (要停多久) 
{

	for (int j = 0; j<s; j++)
		for (int i = 0; i < 100000; i++);
}

int main()
{

	int i = 0;//算角度的 
	while (1)
	{
		
		for(int j=0;j<2*i+10;j++)//跑幾行(2*i+10)就換行//固定圖形要換行的部分 
		{
			
			print((20) * ((1 - sin(i*3.1416 / 180))), ((20) * (1 - sin(i*3.1416 / 180))), (20) * ((1 +sin(i*3.1416 / 180))));
			//曲線的公式:r*sin(theata)///分別為a b c
			cout << endl;
			i = (i + 10) % 360;//每個角度都在360度跑， 每次隔30度 
			wait(1000); 
		}
		cout<<"\n\n\n\n\n\n\n";//酒杯的畫面輸出即換行 
	}
	
	return 0;
}
