#include<iostream>
using namespace std;

class Complex{
	public:
		double real , imag;
		Complex(){
		}
		Complex( double real , double imag){
			this->real= real;
			this->imag = imag;
		}
		
		Complex operator + ( Complex c) {
			Complex ans ;
			ans.real = c.real + this->real;
			ans.imag = c.imag + this->imag;
			return ans;
		}
		
		void printComplexNumber(){
			cout << this->real << " + " << this->imag << "i" << endl;
		}
};



int main(){
	Complex c1(2.3 ,2.3) , c2( 4.0 , 4.5);
	Complex c3=c1+c2;
	c3.printComplexNumber();
	
	return 0;
}
