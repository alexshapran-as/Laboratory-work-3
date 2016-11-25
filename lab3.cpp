/*
Лабораторная работа №3
Задание: ∑(n=1 -> ∞ ) = ((-1)^(n)*n)/((2n-1)^2*(2n+1)^2), eps = 0.001
Алексей Шапран 
Группа: ИУ8-14
*/
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std; 

int main(void)
{	
	int n = 0;
	int sign = -1;
	double sum = 0.0; 
	double sum_mod = 0.0; 
	double eps = 0.001;

	cout << endl << "Sum(n=1 -> infinity ) = ((-1)^(n)*n)/((2n-1)^2*(2n+1)^2), eps = 0.001" << endl;

	do 
	{
		n++;  
		sum_mod = (double)((1)*n) / ( pow((2*n-1), 2)*pow((2*n+1), 2) );  
		sum += sign*sum_mod;  
		sign *= -1;  
	}
	while(sum_mod >= eps);

	cout << endl << "\tSum = " << sum << endl << "\tn = " << n << endl;

	return 0;
}
