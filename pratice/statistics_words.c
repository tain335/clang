#include <stdio.h>

#define IN 0
#define OUT 1

int main(int argc, char **argv) {
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while((c = getchar()) != EOF) {
		++nc;
		if(c == '\n') {
			++nl;
		}
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		} 
	}

	printf("\n%d %d %d\n", nc, nw, nl);
	return 0;
}