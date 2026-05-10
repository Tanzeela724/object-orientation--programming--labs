#include <iostream>
using namespace std;

class Locker {
public:

    Locker() {
        cout << "Locker allocated to customer." << endl;
    }

    
    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
};

int main() {
    cout << "Block scope object:" << endl;
    {
        Locker l1; 
    } 

    cout << endl;
    cout << "Heap object:" << endl;
    Locker* l2 = new Locker();  

    delete l2;  

    return 0;
}
