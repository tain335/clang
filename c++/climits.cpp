#include <iostream>
#include <climits>

using namespace std;

int main() {
	cout << "CHAR MAX: " << CHAR_MAX << endl;
	cout << "UCHAR MAX: " << UCHAR_MAX << endl;
	cout << "LONG_MAX: " << LONG_MAX << endl;
	cout << "ULONG_MAX: " << ULONG_MAX << endl;
	cout << "INT_MAX: " << INT_MAX << endl;
	cout << "char is: " << sizeof (char) << endl;
	cout << "short is:" << sizeof SHRT_MAX << endl;
	cout << "long is：" << sizeof LONG_MAX << endl;
	cout << "long long is: " << sizeof LLONG_MAX << endl;
}