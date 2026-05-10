#include<iostream>
using namespace std;
struct student{
	string firstName;
	string lastName;
	int rollNumber;
	int marks;
	void displayStudentInfo(){
	cout<<" Full Name:"<< firstName<< " "<< lastName <<endl;
	cout<<"Marks"<< marks <<" "<< endl;}
};
int main()
{ student s;
student *ptr;
ptr=&s;
ptr->firstName="tanzeela";
ptr->lastName="rehman";
ptr->rollNumber=36;
ptr->marks=90;
ptr->displayStudentInfo();



}
