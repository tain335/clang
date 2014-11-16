#include <iostream>

using namespace std;

int main() {
	/*
	int age = 39;
	int* pd = &age;
	const int* pt = pd;
	return 0;*/
	
	const int** pp2;
	int* p1;
	int n = 13;
	p1 = &n;
	pp2 = &p1;
	//*pp2 = &n;
	*p1 = 10;
	return 0;
}