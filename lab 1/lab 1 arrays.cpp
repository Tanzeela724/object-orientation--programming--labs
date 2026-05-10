#include<iostream>
using namespace std;
struct student{
	string firstName;
	string lastName;
	int rollNumber;
	int marks;
void displaystudentInfo(){
	cout<<"student full name :"<<firstName<<" "<<lastName<<endl;
	cout <<"\nmarks:"<<marks<< endl;
	
	
}
};
int main(){
	int n;
	cout<<"enter the no of student:";
	cin>>n;
	student students[n];
	for(int i=0;i<n ;i++)
	{
		cout<<"\nenter the detail of students"<< i+1<<endl;
		cout<<"first name";
		cin>>students[i].firstName;
		cout<<"last name";
		students[i].lastName;
		cout<<"\nmarks";
		students[i].marks;
		cout<<"\nrollnumer";
		students[i].rollNumber;
		
	}
	
}
