#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv)
 {
float a[30]; //������ �� 30 �����
//���������� ������� ������� ��������� � ����������
cout<<"\nEnter next 30  numbers: \n";
for(int i = 0; i<30; i++)
cin>>a[i];
//����� ������� �� �����
for(int i = 0; i<30; i++)
cout<<a[i]<<'\t';
		return 0;
}
