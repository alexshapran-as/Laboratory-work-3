/*
Лабораторная работа №3
Задание: ∑(k=1 -> ∞ ) = (-1)^(k-1)/k^2, eps = 1e-4
Алексей Шапран 
Группа: ИУ8-14
*/
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std; 

int main(void)
{	
	int k = 0;
	int sign = 1;
	double sum = 0.0; 
	double sum_mod = 0.0; 
	double eps = 1e-4;

	cout << endl << "Sum(k=1 -> infinity ) = (-1)^(k-1)/k^2" << endl;

	do 
	{
		k++;  
		sum_mod = (double)1 / ( k * k );  
		sum += sign*sum_mod;  
		sign *= -1;  
	}
	while(sum_mod >= eps);

	cout << endl << "\tSum = " << sum << endl << "\tk = " << k << endl;

	return 0;
}