#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;

	printf("fahr\tcelsius\n");

	while (celsius <= upper) {
		fahr = (celsius * 1.8) + 32;
		printf("%4.0f\t%6.1f\n", fahr, celsius);
		celsius = celsius + step;
	}
}
