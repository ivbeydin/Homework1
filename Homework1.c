#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int num = 1, res = 0, i = 0;
	int* ptr = (int*)malloc(num * sizeof(int));
	ptr[num - 1] = 0;
	char put;

	while ((put = getchar()) != '\n') {

		ptr[num - 1] = (int)(put - '0');
		ptr = realloc(ptr, (++num) * sizeof(int));
	}
	num--;

	for (int j = 0; j < num; j++)
		res += (int)pow(2, num - j - 1) * ptr[j];

	printf("Digit : %d\n", res);
	free(ptr);
	return 0;
}