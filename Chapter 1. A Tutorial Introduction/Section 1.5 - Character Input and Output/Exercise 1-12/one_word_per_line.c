/* Exercise 1-12.
 * Write a program that prints its input one word per line. */

#include <stdio.h>

#define IN_SPACE 1	/* inside a whitespace */
#define OUT_SPACE 0	/* outside of a whitespace */

main() {
	int c, state;

	state = IN_SPACE;
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			if(state == OUT_SPACE)
				putchar('\n');
			state = IN_SPACE;
		} else {
			state = OUT_SPACE;
			putchar(c);
		}
	}
}

