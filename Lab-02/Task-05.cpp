#include <iostream>
using namespace std;

class Employee {
private:
	int id;
	string name;
	float salary;
	
	public:
		Employee(){
			id=0;
			name="Not assigned";
			salary = 0.0;
		}
   
   void displayDetails (){
   	cout << id << name << salary << endl;
   }
};

int main() {
   Employee saba;
   saba.displayDetails();

    return 0;
}
