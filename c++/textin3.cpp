#include <iostream>

using namespace std;

int main() {
	char ch;
	int count = 0;
	cin.get(ch); //ch = cin.get()
	while(cin.fail() == false) { // ch != EOF
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";
	return 0;
}