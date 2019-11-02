#include <stdio.h>

#define MAXLINE 1000	/* Maximum input line size */

int fetchline(char line[], int maxline);
void copy(char to[], char from[]);

int 
main() {
	int len;		/* current line length */
	int max;		/* maximum length seen so far */
	char line[MAXLINE]; 	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while((len = fetchline(line, MAXLINE)) > 0)
		if(len > max) {
			max = len;
			copy(longest, line);
		}
	if(max > 0)	/* there was a line */
		printf("%s", longest);
	return 0;
}

int
fetchline(char line[], int maxline) {
	int c, i;

	for(i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;

	if(c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}

