#include <stdio.h>
/* Exercise 1-15
 * Rewrite the temperature conversion program of Section 1.2 
 * to use a function for conversion.  */

int fahrenheit_to_celsius(int fahrenheit);

int
main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	while(fahr <= upper) {
		celsius = fahrenheit_to_celsius(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

int fahrenheit_to_celsius(int fahrenheit) {
	return (5.0 / 9.0) * (fahrenheit - 32.0);
}

