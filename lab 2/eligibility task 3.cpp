#include<iostream>
using namespace std;
class voter{
	public:
	string name;
	int age;
	
	bool isEligible(){
		if(age>=18)
		return true;
		else
		 return false;
		 
	}
};
int main(){
voter v;
cout<<"enter name:";
cin>>v.name;
cout<<"enter age:";
cin>>v.age;
if (v.isEligible() ){

cout<<"youre eligible for vote";
}
else{

cout<<"youre not eligible for vote";
}
}



