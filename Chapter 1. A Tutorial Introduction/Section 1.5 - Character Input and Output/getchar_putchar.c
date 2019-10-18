/* Simple program to read a fixed number of characters from input stream and then print them on the screen */

#include <stdio.h>

#define CHAR_COUNT 5	/* number of characters expected from the user to provide */

main() {
	printf("Input 5 characters!\n");

	char c;
	for(int count = 0; count < CHAR_COUNT; count = count +1) {
		c = getchar();
		putchar(c);
	}
	putchar('\n');
}	

