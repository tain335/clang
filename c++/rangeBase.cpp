#include <iostream>

using namespace std;

int main() {
	double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
	for(double x : prices) {
		cout << x << endl;
	}
	return 0;
}