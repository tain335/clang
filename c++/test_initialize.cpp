#include <iostream>
using namespace std;

class Foo {
	private:
		int first_num;
		int second_num;
		int nums[5];
	public:
		Foo(int m_first_num, int m_second_num);
		void show();
};


Foo::Foo(int m_first_num, int m_second_num) {
	first_num = m_first_num;
	second_num = m_second_num;
}

void Foo::show() {
	cout << nums[4] << endl;
}

int main() {
	Foo fo = { 1, 2 };
	fo.show();
}
