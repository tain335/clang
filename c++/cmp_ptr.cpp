#include <iostream>
#include <cstdlib>
using namespace std;

class A {
	private:
		int x;
	public:
		A() {}
		~A() { cout << "Destroy A" << endl; }
};

class B {
	private:
		int y;
	public:
		B() {}
		~B() { cout << "Destroy B" << endl; }
};

class C : public A, public B {
	private:
		int x;
	public:
		C() {}
		~C() {}
};

int main() {
	C * newC = new C();
	A * newA = newC;
	B * newB = newC;//出现偏移量问题

	cout << "newC" << " " << newC << endl;
	cout << "newA" << " " << newA << endl;
	cout << "newB" << " " << newB << endl;

	C newCObj;
	A newAObj = newCObj;
	cout << "newCObj" << " " << &newCObj << endl;
	cout << "newAObj" << " " << &newAObj << endl;
}