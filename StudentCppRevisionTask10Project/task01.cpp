#include "tasks.h"

/*	Task 01. Squares of Natural Numbers [�������� ����������� �����]
*
*	�� ��������� ������������ ����� ������������ ��� �������� �����,
*	�� ������������� ������� ������������ �����, � ������� �����������.
*	� ������ ������������ ������ ����������� ����.
*
*	������ ������� ������ [input]
*	�� ���� ������� ��������� ����� ����� ���� int.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ������, ������� �������� ����� �� �������.
*
*	[ input 1]: 50
*	[output 1]: "1 4 9 16 25 36 49"
*
*	[ input 2]: -50
*	[output 2]: "0"
*
*	[ input 3]: 0
*	[output 3]: "0"
*/

string task01(int number) {
	if(number < 1){
		return "0";
	}
	string result = "";

	for (int i = 1; i * i <= number; i++)
	{
		result += to_string(i * i);
		result += (i + 1) * (i + 1) > number ? "" : " ";
	}

	return result;
}