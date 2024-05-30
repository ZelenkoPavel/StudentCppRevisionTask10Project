﻿#include "tasks.h"

/*	Task 03. The Smallest Natural Divisor [наименьший натуральный делитель]
*
*	Дано целое число. Выведите его наименьший натуральный делитель,
*	отличный от 1. Если данные некорректны, т.е. меньше или равно единице,
*	то необходимо возвратить ноль.
*
*	Формат входных данных [input]
*	На вход функция принимает целое число типа int.
*
*	Формат выходных данных [output]
*	Функция должна возвратить целое число, которое является решением задания.
*
*	[ input 1]: 15
*	[output 1]: 3
*
*	[ input 2]: 49
*	[output 2]: 7
*
*	[ input 3]: 1
*	[output 3]: 0
*
*	[ input 4]: -15
*	[output 4]: 0
*/

int task03(int number) {
	if (number <= 1){
		return 0;
	}

	int the_smallest_natural_divisor;

	for (int i = number; i > 1; i--)
	{
		if (number % i == 0) {
			the_smallest_natural_divisor = i;
		}
	}

	return the_smallest_natural_divisor;
}