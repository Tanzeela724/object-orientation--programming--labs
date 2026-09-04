#include<iostream>
using namespace std;

template <typename T>
void printTwice( T val ){
	cout << val << endl;
	cout << val << endl;
}

int main(){
	printTwice(5) ;
	printTwice(3.3);
	printTwice("mariam");
	
	return 0;
}
