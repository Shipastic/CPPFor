#include <iostream>
#include <exception>
#include <math.h>
using namespace std;

int main(int argc, char** argv)
 {

int i, j = 0;
int Z[5][6];
int A[6];
//заполнение массива целыми числами
for(i=0; i<5; i++)
{
	for(j=0; j<6; j++)
	{
		cin>>Z[i][j];
	}
}
//вывод массива на экран
for(i=0; i<5; i++)
{
	for(j=0; j<6; j++)
		cout<<Z[i][j]<<'\t';
		cout<<endl;	
}
cout<<endl;
int num = 1;
int rez;
for(i=0; i<5; i++)
{
	for(j=0; j<6; j++)
	{
	num++;
	if((j%2)!=0)
	{
	rez = Z[i][j]/num;
	if((rez%2)!=0)
	Z[i][j]=rez;
	}
	}	
}
for(i=0; i<5; i++)
{
	for(j=0; j<6; j++)
		cout<<Z[i][j]<<'\t';
		cout<<endl;
}
		return 0;
}
