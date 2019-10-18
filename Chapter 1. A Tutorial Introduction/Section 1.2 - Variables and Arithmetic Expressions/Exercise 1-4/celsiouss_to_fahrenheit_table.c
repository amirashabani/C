#include <stdio.h>

/* Exercise 1-4.
 * Write a program to print the corresponding Celsius to Fahrenheit table. */

main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	printf("Celsius Fahrenheit\n");
	celsius = lower;
	while(celsius <= upper) {
		fahr = ((9.0 / 5.0) * celsius) + 32.0;
		printf("%7.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

