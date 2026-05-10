#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int rollNo;
	float marks;
	 
	void getData(){
		cout<<"enter the name";
		cin>>name;
		cout<<"enter marks";
		cin>>marks;	
	}
	void displayData(){
		cout<<"name"<<name<<endl;
		cout<<"roll no"<<rollNo<<endl;
		cout<<"marks"<<marks<<endl;
	}
};
int main(){
	student s1;
	s1.getData() ;
	s1.displayData();
	
}
