#include <iostream> 
#include <cmath>
#include <stdlib.h>
using namespace std;


void print(int a, int b,int c)//�Τ����N�Ja,b,c 
{
	int i;
	for (i = 0; i < c; i++)//�ΤT����ƪ�������X�ťչϦ��u 
	{
		cout << " ";
	}
	//��X�ťէY��X
	cout << "*   *"; 
	
	//�ΤT����ƪ�������X�s�M�̪� 
	for (i = 0; i < a; i++)
	{
		cout << ".";//�s�M���b�� 
	}
	
	{
		for (i = 0; i < b; i++) 
		{
			cout << ".";//�s�M�k�b�� 
		}
	}
	//��X���ϧΧY��X
	cout << "*   *";
}

void wait(int s)//�e���ʪ��t�� (�n���h�[) 
{

	for (int j = 0; j<s; j++)
		for (int i = 0; i < 100000; i++);
}

int main()
{

	int i = 0;//�⨤�ת� 
	while (1)
	{
		
		for(int j=0;j<2*i+10;j++)//�]�X��(2*i+10)�N����//�T�w�ϧέn���檺���� 
		{
			
			print((20) * ((1 - sin(i*3.1416 / 180))), ((20) * (1 - sin(i*3.1416 / 180))), (20) * ((1 +sin(i*3.1416 / 180))));
			//���u������:r*sin(theata)///���O��a b c
			cout << endl;
			i = (i + 10) % 360;//�C�Ө��׳��b360�׶]�A �C���j30�� 
			wait(1000); 
		}
		cout<<"\n\n\n\n\n\n\n";//�s�M���e����X�Y���� 
	}
	
	return 0;
}
