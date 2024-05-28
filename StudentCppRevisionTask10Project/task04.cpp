#include "tasks.h"

/*	Task 04. Count of Number Digits [������� ���� �����]
*
*	���� ����� ����� (����� ���� ��� �������������, ��� � �������������).
*	����������� ���������� ���� � ��.
*
*	������ ������� ������ [input]
*	�� ���� ������� ��������� ����� ����� ���� long long.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ����� �����, ������� �������� �������� �������.
*
*	[ input 1]: 15
*	[output 1]: 2
*
*	[ input 2]: 9
*	[output 2]: 1
*
*	[ input 3]: 0
*	[output 3]: 1
*
*	[ input 4]: -15
*	[output 4]: 2
*/

int task04(long long number) {
	number = number < 0 ? -number : number;

	int count = 1;

	while (number > 9) {
		number /= 10;
		count++;
	}

	return count;
}