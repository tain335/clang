#include <iostream>
#include <cstring>

using namespace std;

int main() {
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";

	cout << "Howdy! I'm " << name2;
	cout << "What's yout name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", you name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "Yourm initial is " << name1[0] << endl;
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: " << name2;
	return 0;
}