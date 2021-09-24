#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int num = 1, i = 0;
	long long res = 0;
	int* ptr = (int*)malloc(num * sizeof(int));
	ptr[num - 1] = 0;
	char put;

	while ((put = getchar()) != '\n') {

		ptr[num - 1] = (int)(put - '0');
		ptr = realloc(ptr, (++num) * sizeof(int));
	}
	num--;

	for (int j = 0; j < num; j++)
		res += (long long)pow(2, num - j - 1) * ptr[j];

	printf("Digit : %llu\n", res);
	free(ptr);
	return 0;
}