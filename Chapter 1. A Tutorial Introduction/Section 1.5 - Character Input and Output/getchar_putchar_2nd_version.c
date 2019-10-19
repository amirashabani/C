/* copy input to output; 2dn version */

#include <stdio.h>

main() {
	int c;

	while((c = getchar()) != EOF) {
		putchar(c);
	}
}

