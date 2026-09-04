#include <iostream>
using namespace std;

class Box{
private:
    int length;

public:
    Box(int l){
	 length = l;
    }

    friend void displayLength(Box b);
};

void displayLength(Box b){
    cout << "Length of Box is: " << b.length << endl;
}

int main()
{
    Box b(10);
    displayLength(b);

    return 0;
}
