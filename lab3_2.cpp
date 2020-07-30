#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv)
 {
float a[30]; //массив из 30 чисел
//заполнение массива числами введеными с клавиатуры
cout<<"\nEnter next 30  numbers: \n";
for(int i = 0; i<30; i++)
cin>>a[i];
//вывод массива на экран
for(int i = 0; i<30; i++)
cout<<a[i]<<'\t';
		return 0;
}
