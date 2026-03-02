// Task 02 [The sum of average elements]
// Сумма средних элементов
// 
// Дан вектор вещественных(дробных) значений. Необходимо спроектировать
// и реализовать функцию, которая находит сумму всех элементов вектора,
// абсолютная величина которых меньше среднего арифметического всех элементов.
// Далее необходимо разработать полноценный или тестовый проект для полной 
// демонстрации работоспособности данной функции.
#include"logic.h"

double find_arithmetic_number(int array[DEFAULT_SIZE], int length) {
	double arithmetic = 0;
	for (int i = 0; i < length; i++)
	{
		arithmetic += array[i];
	}
	return arithmetic / length;
}
int count_above_average(int array[DEFAULT_SIZE], int length) {
	double arithmetic = find_arithmetic_number(array, length);
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] < arithmetic) {
			count++;
		}
	}
	return count;

}
