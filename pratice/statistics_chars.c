#include <stdio.h>

int main(int argc, char **argv) {
	int c, nw, nt, nn;

	nw = nt = nn = 0;

	while((c = getchar()) != EOF) {
		if(c == ' ') {
			++nw;
		} else if(c == '\t') {
			++nt;
		} else if(c == '\n') {
			++nn;
		}
	}

	printf("\n%d %d %d\n", nw, nt, nn);
	return 0;
}