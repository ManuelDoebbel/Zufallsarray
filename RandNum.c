#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "RandNum.h"

void GenerateRandomNumbers(int* array, int size) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100 + 1;
	}
}

void PrintArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
		if((i +1) % 5 == 0) {
			printf("\n");
		}
	}
	printf("\n");
}