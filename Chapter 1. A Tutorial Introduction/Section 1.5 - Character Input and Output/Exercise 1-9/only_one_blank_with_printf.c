/* Exercise 1-9.
 * Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

main() {
	int c, inspace;

	c = 0;		/* for characters from input */
	inspace = 0;	/* to detect if there are more than one space in a row */

	while((c = getchar()) != EOF) {
		if(c == ' ') {
			if(inspace == 0) {
				printf("%c", c);
				inspace = 1;
			}
		}
		if(c != ' ') {
			printf("%c", c);
			inspace = 0;
		}
	}
}

