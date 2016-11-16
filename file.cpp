
#include<iostream>
#include<cmath>
using namespace std;

class Account {
	private:
		double balance;
		double withdrawn;
		double deposit;
		double interest;
	public:
		Account(): balance(0), withdrawn(0), deposit(0), interest(0){}
		void setBalance(double b) {
			balance = abs(b);
		}
		int getBalance() {
			return abs(balance);
		}
		void setWithdraw(double w) {
			withdrawn = abs(w);
		}
		void setDeposit(double d) {
			deposit = abs(d);
		}
		double calc_withdraw() {
			return balance -= withdrawn;
		}
		double calc_deposit() {
			return balance += deposit;
		}
		double calc_interest() {
			return balance * .1;
		}
};

void acount_loop(Account acount) {
	while(true) {
		double a,w,c,d;

		cout << "enter balance" << endl;

		cin >> a;
		acount.setBalance(a);

		cout << "Withdraw some" << endl;
		cin >> w;
		if(acount.getBalance() > w) {	
			acount.setWithdraw(w);
			acount.calc_withdraw();
		} else {
			break;
		}
		cout << "acount balance " << acount.getBalance() << "" << endl;


		cout << "Desposit some" << endl;

		cin >> c;
		acount.setDeposit(c);
		acount.calc_deposit();
		cout << "acount balance " << acount.getBalance() << "" << endl;


		
		cout << "total interest " << endl;
		cout << acount.calc_interest() << endl;

		break;
	}
}


int main() {

	Account acount1;
	acount_loop(acount1);
	
	return 0;
}


