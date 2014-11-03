#include <stdio.h>

#define IN 0
#define OUT 1

// int main(int argc, char **argv) {
// 	int c, state;

// 	while((c = getchar()) != EOF) {
// 		if(state == OUT && c == ' ') {
// 			state = IN;
// 			putchar(c);
// 		} else if(c != ' ') {
// 			state = OUT;
// 			putchar(c);
// 		}
// 	}

// 	return 0;
// }

int main(int argc, char **argv) {
	int c, lastc;

	while((c = getchar()) != EOF) {
		if(c != ' ') {
			putchar(c);
		} else if(lastc != ' ') {
			putchar(c);
		}
		lastc = c;
	}

	return 0;
}