#include <iostream>

using namespace std;

const int Len = 66;
const int Divs = 6;

void subdivide(char ar[], int low, int high, int level);
void testAdress(char ar[]);

int main() {
	char ruler[Len];
	int i;
	for(i = 1; i < Len - 2; i++) {
		ruler[i] = ' ';
	}
	ruler[Len - 1] = '\0';
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	/* test address start*/
	cout << &ruler << endl;
	char* rulercopy = ruler;
	cout << &rulercopy << endl; 
	testAdress(ruler);
	/* test address end*/
	cout << ruler << endl;
	for(i = 1; i <= Divs; i++) {
		subdivide(ruler, min, max, i);
		cout << ruler << endl;
		for(int j = 1; j < Len - 2; j++) {
			ruler[j] = ' ';
		}
	}
	return 0;
}

void subdivide(char ar[], int low, int high, int level) {
	if(level == 0) {
		return;
	}
	int mid = (high + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, high, level - 1);
}

void testAdress(char ar[]) {
	//为什么&ar 不等于 &ruler？与char* ar = ruler;
	cout << &ar << endl;
}