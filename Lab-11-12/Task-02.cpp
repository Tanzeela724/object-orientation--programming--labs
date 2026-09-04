#include<iostream>
using namespace std;

class BankAccount {
	private:
		string accountHolderName;
		double balance;
		
	public:
		static int number;	
		BankAccount( string n , double b){
			accountHolderName = n;
			balance = b ;
			number ++;
		}
		
		
};

 int BankAccount :: number = 0 ;
 
 int main() {
 	 BankAccount b1 ( "Mariam " , 5000 );
 	 BankAccount b2 ( "Abeera" , 2000 );
 	 BankAccount b3 ( "Tanzeela " , 5000 );
 	 
     cout << "Total Bank Accounts: " << BankAccount :: number << endl;
	return 0;
 }
 
 
 
