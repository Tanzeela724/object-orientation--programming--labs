#include<iostream>
using namespace std;

template<typename T>
T findMin( T a , T b ){
	if ( a < b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
    cout << "Minimum integer is : " << findMin(1, 5) << endl;
    cout << "Minimum double is : " << findMin(4.5, 2.2) << endl;
    cout << "Minimum character is : " << findMin('r', 'a') << endl;
	
	return 0;
}

