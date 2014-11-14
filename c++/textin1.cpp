#include <iostream>

using namespace std;

int main() {
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;
	while(ch != '#') {
		cout << ch;//忽略了空格，换行符等 使用cin.get()可以避免
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read\n";
	return 0;
}