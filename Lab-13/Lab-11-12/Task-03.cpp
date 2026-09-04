#include<iostream>
using namespace std;

class BankAccount {
	private:
		string accountHolderName;
		double balance;
			static int number;
		
	public:
			
		BankAccount( string n , double b){
			accountHolderName = n;
			balance = b ;
			number ++;
		}
		
		static void displayTotalAccounts()
    {
        cout << "Total Bank Accounts: " << number << endl;
    }
		
};

 int BankAccount :: number = 0 ;
 
 int main() {
 	 BankAccount b1 ( "Mariam " , 5000 );
 	 BankAccount b2 ( "Abeera" , 2000 );
 	 BankAccount b3 ( "Tanzeela " , 5000 );
 	 
 	 BankAccount::displayTotalAccounts();
 	 return 0;
 }
 
 
 
