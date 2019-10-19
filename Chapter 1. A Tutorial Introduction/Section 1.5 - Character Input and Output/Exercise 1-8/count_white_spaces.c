/* Exercise 1-8.
 * Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

main() {
	double whitespaces;
	int c;

	whitespaces = 0;
	while((c = getchar()) != EOF)
		if(c == ' ' || c == '\n' || c == '\t')
			++whitespaces;
	printf("%.0f\n", whitespaces);
}

