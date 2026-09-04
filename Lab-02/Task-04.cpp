#include <iostream>
using namespace std;

class Temperature {
	float fahrenheit;
	public:
		float celsiusTemp;
		
		void convertTemp(){
			fahrenheit=(celsiusTemp*9/5) + 32;
		}
	
	void display() {
		cout << "The temperature in Fahrenheit is " << fahrenheit << endl;
	}
	
};

int main(){
	Temperature t1;
	t1.celsiusTemp=2;
	t1.convertTemp();
	t1.display();
	return 0;
}
