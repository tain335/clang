#include <iostream>

using namespace std;

int main() {
	enum spectrum {red, orange, yellow, green};

	spectrum band = red;

	cout << band << endl;

	//spectrum band1 = 1; //problem
	spectrum band1 = (spectrum)1;

	spectrum band2 = (spectrum)2000;

	int color = red;

	cout << band1 << endl;

	cout << band2 << endl;

	return 0;
}