#include <iostream>

using namespace std;

void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);
void swapc(const int&, const int&);

int main() {
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1;
	cout << "wallet2 = $" << wallet2;

	cout << "Using references to swap conents:\n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using pointers to swap conents again:\n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Trying to use passing by value:\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	swapc(100, 100);
	return 0;
}

void swapr(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapp(int* p, int* q) {
	int temp;
	temp = *p;
	*p = temp;
}

void swapv(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//const required
void swapc(const int& a, const int& b) {
	cout << a << ' ' << b << endl;
}