#include "tasks.h"

/*	Task X. Unique Number Digits [���������� ����� �����]
*
*	���� ����� ����� (����� ���� ��� �������������, ��� � �������������).
*	���������� ����������, ��� �� ����� ����� ���������, �.�. ����� ����
*	����� ��� �������������.
*
*	������ ������� ������ [input]
*	�� ���� ������� ��������� ����� ����� ���� long long.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ��������� �������� - ����� �� �������.
*
*	[ input 1]: 12345
*	[output 1]: true
*
*	[ input 2]: 54321
*	[output 2]: true
*
*	[ input 3]: 11111
*	[output 3]: false
*
*	[ input 4]: 121
*	[output 4]: false
*
*	[ input 5]: -12345
*	[output 5]: true
*
*	[ input 6]: 0
*	[output 6]: true
*/

bool taskX(long long number) {
	number = number < 0 ? -number : number;

	while (number > 9) {
		int digit = number % 10;
		number /= 10;
		int n = number;
		while (n > 0) {
			if (n % 10 == digit) {
				return false;
			}
			n /= 10;
		}
	}

	return true;
}