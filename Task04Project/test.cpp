#include "test.h"

string convert(int array[DEFAULT_SIZE], int size) {
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";
	}
	return s;
}

void print(int array[DEFAULT_SIZE], int expected[DEFAULT_SIZE], int size, string name) {
	swap_extrem_elements(array, size);
	
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
		cout << "Array before:\t" << convert(array, size) << endl;
		cout << "Array after:\t" << convert(array, size) << endl;
	}

	cout << "----------------------------------------------------" << endl;
}

void test01() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int expected[]{ 10, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	print(array, expected, size, "test01");
}

void test02() {
	int array[]{ 1, 1, 1, 4, 5, 6, 10, 8, 10, 10 };
	int size = 10;
	int expected[]{ 10, 1, 1, 4, 5, 6, 1, 8, 10, 10 };
	print(array, expected, size, "test02");
}

void test03() {
	int array[]{ 5, 4, 3, 2, 1 };
	int size = 5;
	int expected[]{ 1, 4, 3, 2, 5 };
	print(array, expected, size, "test03");
}

void test04() {
	int array[]{ 5, 5, 1, 2, 1 };
	int size = 5;
	int expected[]{ 1, 5, 5, 2, 1 };
	print(array, expected, size, "test04");
}

void test05() {
	int array[]{ 1, 2 };
	int size = 2;
	int expected[]{ 2, 1 };
	print(array, expected, size, "test05");
}

void test06() {
	int array[]{ 2, 1 };
	int size = 2;
	int expected[]{ 1, 2 };
	print(array, expected, size, "test06");
}

void test07() {
	int array[]{ 5, 5, 5 };
	int size = 3;
	int expected[]{ 5, 5, 5 };
	print(array, expected, size, "test07");
}

void test08() {
	int array[]{ 1 };
	int size = -1;
	int expected[]{ 1 };
	print(array, expected, size, "test08");
}

void test09() {
	int array[]{ 1 };
	int size = 0;
	int expected[]{ 1 };
	print(array, expected, size, "test09");
}

void test10() {
	int array[]{ 1, 2, 1 };
	int size = 3;
	int expected[]{ 2, 1, 1 };
	print(array, expected, size, "test10");
}

void test11() {
	int array[]{ 1, 2, 2 };
	int size = 3;
	int expected[]{ 2, 1, 2 };
	print(array, expected, size, "test11");
}

void test12() {
	int array[]{ 2, 2, 1 };
	int size = 3;
	int expected[]{ 1, 2, 2 };
	print(array, expected, size, "test12");
}

void test13() {
	int array[]{ 2, 1, 2 };
	int size = 3;
	int expected[]{ 1, 2, 2 };
	print(array, expected, size, "test13");
}
