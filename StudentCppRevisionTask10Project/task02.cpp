#include "tasks.h"

/*	Task 02. An Exact Power of Two [������ ������� ������]
*
*	���� ����� ����� (����� ���� ��� �������������, ��� � �������������).
*	���������� ����������, �������� �� ������ ����� ������ �������� ������.
*
*	������ ������� ������ [input]
*	�� ���� ������� ��������� ����� ����� ���� int.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ��������� �������� - ����� �� �������.
*
*	[ input 1]: 32
*	[output 1]: true
*
*	[ input 2]: 1
*	[output 2]: true
*
*	[ input 3]: 0
*	[output 3]: false
*
*	[ input 4]: 30
*	[output 4]: false
*
*	[ input 4]: -4
*	[output 4]: false
*/

bool task02(int number) {

	if(number <= 0){
		return false;
	}

	for (int i = 0; pow(2, i) <= number; i++)
	{
		if (pow(2, i) == number) {
			return true;
		}
	}

	return false;
}