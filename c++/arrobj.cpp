#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};
string arr[2] = {"ab", "cd"};
string* arr1 = arr;

void fill(array<double, Seasons>* pa);
void show(array<double, Seasons> da);

int main() {
	array<double, Seasons> expenses;
	cout << *arr << endl;
	//cout << (arr1 == arr) << endl;
	//cout << (arr == &arr) << endl;
	//cout << arr == &arr << endl; //same address but not same types
	cout << arr << ' ' << &arr << ' ' << &arr[0] << ' ' << &arr1 << ' ' << arr1 << endl;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(array<double, Seasons>* pa) {
	for(int i = 0; i < Seasons; i++) {
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}

void show(array<double, Seasons> da) {
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for(int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

