/* Exercise 1-14.
 * Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>

main() {
	int c;		/* read input character by character */
	int freq[256];	/* frequencies of each ASCII character */
	int i, j;	/* index to traverse through arrays */
	int ccount = 0;	/* count the number of characters in input */
	float perc;	/* percentage to calculate frequency */

	/* Initialize the array with 0 */
	for(i = 0; i < 256; ++i)
		freq[i] = 0;

	/* fetch one character (until it reaches end of file)
	 * and increment its index in the array */
	while((c = getchar()) != EOF) {
		++freq[c];
		++ccount;
	}

	/* print those frequencies that are not zero */
	for(i = 0; i < 256; ++i)
		if(freq[i] != 0) {
			perc = (((float)freq[i]) / ccount) * 100;
			printf("%c: ", i);
			for(j = 0; j < (int)perc; ++j)
				putchar('-');
			printf(" %.2f%\n", i, perc);
		}
}

