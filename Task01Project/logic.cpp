
#include"logic.h"
int count_nonzero_elements(int array[DEFAULT_SIZE], int size) {
	if (size <= 0) {
		return -1;
	}
	int count =0;
	for (int i = 0; i < size; i++)
	{
		count += array[i] != 0 ? 1 : 0;
	}

	return count;
}