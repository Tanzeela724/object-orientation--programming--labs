#include<iostream>
using namespace std;
class rectangle{
	public:
	int length;
	int width;
	 public:
	 	setDimension(){
	 		cout<<"enter the length";
	 		cin>>length;
	 		cout<<"enter the width";
	 		cin>>width;
		 }
	
        area(){
        	return length * width;
        	
		}
	
	     perimeter(){
	     	return 2*(length+width);
	     	
		 }		 
};
int main(){

rectangle r;
r.setDimension();
cout<<"area"<< r.area()<<endl;
cout<<"perimeter="<< r.perimeter() << endl;
}
