#include "test.h"

string convert(int array[DEFAULT_SIZE], int size) {
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";
	}
	return s;
}

void print(int array[DEFAULT_SIZE], int expected[DEFAULT_SIZE], int size,
	int a, int b, string name) {

	reverse(array, size, a, b);

	bool result = true;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != expected[i]) {
			result = false;
			break;
		}
	}

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	if (size > 0) {
		cout << "a = " << a << "; b = " << b << endl;
		cout << "Array before:\t" << convert(array, size) << endl;
		cout << "Array after:\t" << convert(array, size) << endl;
	}

	cout << "----------------------------------------------------" << endl;
}

void test01() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 0;
	int b = 9;
	int expected[]{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	print(array, expected, size, a, b, "test01");
}

void test02() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 9;
	int b = 0;
	int expected[]{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	print(array, expected, size, a, b, "test02");
}

void test03() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 3;
	int b = 9;
	int expected[]{ 1, 2, 3, 10, 9, 8, 7, 6, 5, 4 };
	print(array, expected, size, a, b, "test03");
}

void test04() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 3;
	int b = 8;
	int expected[]{ 1, 2, 3, 9, 8, 7, 6, 5, 4, 10 };
	print(array, expected, size, a, b, "test04");
}

void test05() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 4;
	int b = 5;
	int expected[]{ 1, 2, 3, 4, 6, 5, 7, 8, 9, 10 };
	print(array, expected, size, a, b, "test05");
}

void test06() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = -4;
	int b = 5;
	int expected[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(array, expected, size, a, b, "test06");
}

void test07() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 4;
	int b = -5;
	int expected[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(array, expected, size, a, b, "test07");
}

void test08() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 4;
	int b = 20;
	int expected[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(array, expected, size, a, b, "test08");
}

void test09() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 20;
	int b = 5;
	int expected[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(array, expected, size, a, b, "test09");
}

void test10() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 8;
	int b = 9;
	int expected[]{ 1, 2, 3, 4, 5, 6, 7, 8, 10, 9 };
	print(array, expected, size, a, b, "test10");
}

void test11() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 0;
	int b = 1;
	int expected[]{ 2, 1, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(array, expected, size, a, b, "test11");
}

void test12() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 3;
	int b = 3;
	int expected[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(array, expected, size, a, b, "test12");
}

void test13() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 7;
	int b = 9;
	int expected[]{ 1, 2, 3, 4, 5, 6, 7, 10, 9, 8 };
	print(array, expected, size, a, b, "test13");
}

void test14() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int a = 0;
	int b = 2;
	int expected[]{ 3, 2, 1, 4, 5, 6, 7, 8, 9, 10 };
	print(array, expected, size, a, b, "test14");
}

void test15() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 0;
	int a = 4;
	int b = 20;
	int expected[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(array, expected, size, a, b, "test15");
}
