#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0


int main(int artc, char **argv) {
	int c, i, nc, state;
	int len;
	int maxvalue;
	int ovflow;
	int wl[MAXWORD];

	state = OUT;
	nc = 0;
	ovflow = 0;
	for(i = 0; i < MAXWORD; ++i) {
		wl[i] = 0;
	}

	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else if(state == OUT) {
			state = IN;
			++nc;
			++wl[nc];
		} else {
			if(nc < MAXWORD) {
				++wl[nc];
			} else {
				++ovflow;
			}
		}
		
	}

	for(i = 1; i < MAXWORD; ++i) {
		if(wl[i] > maxvalue) {
			maxvalue = wl[i];
		}
	}

	for(i = 1; i < MAXWORD; ++i) {
		printf("%5d - %5d : ", i, wl[i]);
		if(wl[i] > 0) {
			/*MAXHIST may be less than MAXWORD */
			if((len = wl[i] * MAXHIST / maxvalue) <= 0) {
				len = 1;
			}
		} else {
			len = 0;
		}
		while(len > 0) {
			putchar('*');
			--len;
		}
		putchar('\n');
	}

	if(ovflow > 0) {
		printf("There are %d words >= %d\n", ovflow, MAXWORD);
	}

	return 0;
}