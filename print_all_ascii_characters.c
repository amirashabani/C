/* Print all ASCII characters */

#include <stdio.h>

main() {
	int c;

	for(c = 0; c < 256; ++c) {
		printf("%d: %c\n", c, c);
	}
}

