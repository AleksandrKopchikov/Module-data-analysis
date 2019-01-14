//Lesson 1_Aleksander Kopchikov
/*10. Дано целое число N(> 0).С помощью операций деления нацело и взятия остатка от деления
определить, имеются ли в записи числа N нечетные цифры.Если имеются, то вывести True, если нет
— вывести False.
11. С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать среднее арифметическое всех
положительных четных чисел, оканчивающихся на 8.
12. Написать функцию нахождения максимального из трех чисел.
13. * Написать функцию, генерирующую случайное число от 1 до 100.
с использованием стандартной функции rand()
без использования стандартной функции rand()
14. * Автоморфные числа.Натуральное число называется автоморфным, если оно равно последним
цифрам своего квадрата.Например, 25 \ :sup: `2` = 625. Напишите программу, которая вводит
натуральное число N и выводит на экран все автоморфные числа, не превосходящие N.
*/
												//Lesson 1 ch. 10
#include "pch.h"
#include <iostream>
#pragma warning(disable : 4996)
#include <stdio.h>

/*int main(int argc, char * argv[])
{
	int number;
	printf("Input number: ");
	scanf("%d", &number);
	int remainder = 0;
	while ((number > 1) && (remainder != 1))
	{
		remainder = number % 10;
		number = number / 10;
	}
	if ((number == 1) || (remainder == 1))
		printf("True");
	else printf("False");
	getchar();
		return 0;
	}
	*/

												//Lesson 1 ch.11

	/*
	int main(int argc, char * argv[])
	{
		int number;
		printf("Input number: ");
		scanf("%d", &number);
		int sum = 0;
		while (number != 0)
		{
			if ((number > 0) && ((number - (number/10)*10) == 8))
				sum = sum + number;
			printf("Input number: ");
			scanf("%d", &number);
			}
					printf("Sum: %d", sum);
				return 0;
		}
		*/
													//Lesson 1 ch.12
	/*
	#include <time.h>
	#include <iostream.h>
	#include <cmath>
	#include <cstdlib>
	using namespace std;
	const int Array_Size = 3;
	int main(){

		int Array[Array_Size], max;
		printf("Input number: ");
		for (int i = 0; i < Array_Size; i++){
			Array[i] = rand() % 100;
			cout << Array[i];
		}
		cout << endl;
		max = Array[0];
		for (int i = 1; i < Array_Size; i++)
		{
			if (max < Array[i]) max = Array[i];
		}
		cout << "Max: " << max << endl;

		return 0;
	}
	*/
														//Lesson 1 ch.13.1

#include <iostream>
#include <cstdlib>
/*
using namespace std;
int main()
{
	int RandomNumbers[100] = { 0 };

	for (int i = 0; i < 100; i++) {
		RandomNumbers[i] = rand();
		cout << RandomNumbers[i] << endl;
	}
	return 0;
}
*/
															//Lesson 1 ch.13.2
int main()
{
	int a[7] = { 0 };

	for (unsigned i = 0; i < 7; ++i)
	{
		unsigned j = rand() % (i + 1);
		a[i] = a[j];
		a[j] = i + 1;
	}

	for (int i : a)
		cout << i << " ";

	cout << endl;
}
