#include<iostream>
using namespace std;
struct student{
	string firstName;
	string lastName;
	int rollNumber;
	int marks;
	
void displayStudentInfo() {
	cout<<"full name:"<<firstName<<endl;
	cout<<"last name:"<<lastName<<endl;
	cout<<"roll number:"<<rollNumber<<endl;
	cout<<"marks"<<marks<<endl;
 }

};
int main(){
	student s1;
	s1.firstName= "tanzeela ";
	s1.lastName="rehman";
	s1.rollNumber ="36";
	s1.marks="76";
	s1.displayStudentInfo();
}
