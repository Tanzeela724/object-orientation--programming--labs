#include<iostream>
using namespace std;

template <typename T>
class Pair{
	T first;
	T second;
	public:
		Pair( T a , T b){
			first = a;
			second = b;
		}
		
		T getFirst( T a) {
			return first ;
		}
		
		T getSecond ( T b ){
			return second ;
		}
		
		void display(){
			cout << " First: " << first << " , Second: " << second << endl;
		}
};


int main (){
	Pair <int> i ( 2, 3 );
	i.display();
	
	Pair <double> d (2.3 , 1.5 );
	d.display();
	
	Pair <string> s ( "Mariam " , " Gillani" );
	s.display();
	
	return 0;
}
