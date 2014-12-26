#include <iostream>
using namespace std;

class testClass {
	public:
		int classVar[10]; // not init
		static int arrayVar[10];
		static int classStaticName;
		static int getValue() { return classStaticName; }
};

int testClass::classStaticName = 1;
int testClass::arrayVar[10] = {1};
int globle[10]; // init

int main() {
	int methodVar[10]; // not init
	static int methodStaticVar[10]; // init
	testClass s;
	testClass * s1 = new testClass();
	cout << s1->classVar[0] << ' ' << s1->classVar[1] << endl;
	cout << "globle[0] " << globle[0] << endl;
	cout << "globle[1] " << globle[1] << endl;
	cout << "s.classVar[0] " << s.classVar[0] << endl;
	cout << "s.classVar[1] " << s.classVar[1] << endl;
	cout << "testClass::arrayVar[0] " << testClass::arrayVar[0] << endl;
	cout << "testClass::arrayVar[1] " << testClass::arrayVar[1] << endl;
	cout << "testClass::getValue() " << testClass::getValue() << endl;
	cout << "testClass::classStaticName " << testClass::classStaticName << endl;
	cout << "methodVar[0] " << methodVar[0] << endl;
	cout << "methodVar[1] " << methodVar[1] << endl;
	cout << "methodStaticVar[0] " << methodStaticVar[0] << endl;
	cout << "methodStaticVar[0] " << methodStaticVar[1] << endl;
}