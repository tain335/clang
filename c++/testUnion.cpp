#include <iostream>

using namespace std;

struct widget {
	char brand[20];
	int type;
	union {
		long id_num;
		char id_char[20];
	};
};

int main() {
	widget prize;

	cout << prize.type;

	if(prize.type == 1) {
		cin >> prize.id_num;
	} else {
		cin >> prize.id_char;
	}

	return 0;
}