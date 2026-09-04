#include <iostream>
using namespace std;

class Rectangle {
	public:
	int length;
	int width;
	void setDimension();
	int area();
	int perimeter();
};

void Rectangle::setDimension(){
	cout << "Enter length in centimeters" << endl;
	cin>> length;
	
	cout << "Enter width in centimeters" << endl;
	cin>>width;
}


int Rectangle  ::area(){
	return length*width ;
}

int Rectangle ::perimeter(){
	return 2 * ( length+width) ;
}



int main(){
	
	Rectangle x;
	x.setDimension();
	cout << "The area is " << x.area() << " Square Centimeters." << endl;
	cout << "The perimeter is " << x.perimeter() << " centimeters."<< endl;
     return 0;
	
}
