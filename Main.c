#include "RandNum.h"

#define SIZE 30

int main() {
	
	int array[SIZE];

	GenerateRandomNumbers(array, SIZE);
	PrintArray(array, SIZE);

	return 0;
}