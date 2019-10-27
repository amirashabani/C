/* Exercise 1-10.
 * Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way. */

#include <stdio.h>

#define TAB 9		/* ASCII code for tab (\t) */
#define BACKSPACE 8	/* ASCII code for backspace (\b) */
#define BACKSLASH 92	/* ASCII code for backslash (\) */

main() {
	int c;	/* to read input character by character */
	while((c = getchar()) != EOF) {
		if(c == TAB) {
			putchar(BACKSLASH);
			putchar('t');
		} else if(c == BACKSPACE) {
			putchar(BACKSLASH);
			putchar('b');
		} else if(c == BACKSLASH) {
			putchar(BACKSLASH);
			putchar(BACKSLASH);
		} else {
			putchar(c);
		}
	}
}

