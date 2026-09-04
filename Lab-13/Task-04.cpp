#include<iostream>
using namespace std;

template <typename  T>
class Calculator{
	private:
		T a ;
		T b ;
	public:
		Calculator( T x , T y){
			a = x;
			b = y;
		}
		
		T add(){
			return a+b;
		}
		
		T subtract(){
			return a-b;
		}
		
		T multiply(){
			return a*b;
		}
		
};


int main(){
	
	Calculator<int> c1(10, 5);

    cout << "Integer Results:" << endl;
    cout << "Addition: " << c1.add() << endl;
    cout << "Subtraction: " << c1.subtract() << endl;
    cout << "Multiplication: " << c1.multiply() << endl;

    cout << endl;

    Calculator<double> c2(10.5, 2.5);

    cout << "Double Results:" << endl;
    cout << "Addition: " << c2.add() << endl;
    cout << "Subtraction: " << c2.subtract() << endl;
    cout << "Multiplication: " << c2.multiply() << endl;

    return 0;
}
