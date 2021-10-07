#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int num = 1, i = 0;
	long long res = 0;
	int* ptr = (int*)malloc(num * sizeof(int));
	if (ptr == NULL)
		exit(-1);
	ptr[num - 1] = 0;
	char put;

	while ((put = getchar()) != '\n') {

		if (put != '0' && put != '1') {
			printf("Incorrect number");
			free(ptr);
			return 0;
		}

		ptr[num - 1] = (int)(put - '0');
		void* tmp = ptr;
		ptr = realloc(tmp, (++num) * sizeof(int));
		if (ptr == NULL)
			exit(-1);
	}
	num--;

	for (int j = 0; j < num; j++)
		res += (long long)pow(2, (long long)(num) - j - 1) * ptr[j];

	printf("Digit : %llu\n", res);
	free(ptr);
	return 0;
}