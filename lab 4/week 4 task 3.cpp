#include <iostream>
using namespace std;
class rectangle{
	private:
		float length;
		float width;
	public:
		rectangle(){
		length= 0;
		width=0;
	
	rectangle(float lenghth, float width)
{
	length= l;
	width= w;

}
rectangle (float s){

 length= s;
width= s;
}
float area(){
	return length * width;
	
}
     void displayResult(){
    cout<<"length :"<<length<<endl;
	cout <<"width:"	<< width<< endl;
	cout<<"area"<<area() ;
	}
};
int main (){
	rectangle r1;
	rectangle r2( 4.5, 5.0);
	rectangle r3(7.0);
	cout<<"rectangle 1:";
	r1.displayResult();
	cout<< "rectangle 2:";
	 r2.displayResult();
	cout<< "rectangle 3(square)";
	 r3.displayResult();
	
	}
