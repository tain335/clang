#ifndef STOCK10_H
#define STOCK10_H
#include <string>
using namespace std;

class Stock {

	private: 
		string company;
		long shares;
		double share_val;
		double total_val;
		void set_tot() { total_val = shares * share_val; }

	public:
		Stock();
		Stock(const string & co, long n = 0, double pr = 0.0);
		~Stock();
		void buy(long nmu, double price);
		void update(double price);
		void show();
};

#endif