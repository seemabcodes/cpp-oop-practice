#include<iostream>
using namespace std;

class Account {
	private:
		double balance;
		
		public:
			int accountNumber;
			void setBalance(double b) {
				balance = b;
			}
			double getBalance() {
				return balance;
			}
};
int main()
{
	Account  myAccount;
	myAccount.accountNumber = 1234567890;
	myAccount.setBalance(5000.50);
	
	cout<< "Account: " << myAccount.accountNumber << endl;
	cout << "Balance: $" << myAccount.getBalance() << endl;
	
	return 0;
}
