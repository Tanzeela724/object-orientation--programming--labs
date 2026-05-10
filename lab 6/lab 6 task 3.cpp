#include <iostream>
using namespace std;


class File {
public:
 
    File() {
        cout << "Base Class: File opened" << endl;
    }

    
    virtual ~File() {
        cout << "Base Class: File closed" << endl;
    }
};

class TextFile : public File {
public:
   
    TextFile() {
        cout << "Derived Class: TextFile specific operations opened" << endl;
    }


    ~TextFile() {
        cout << "Derived Class: TextFile specific operations closed" << endl;
    }
};

int main() {
    cout << "--- Creating TextFile Object ---" << endl;
    {
        
        TextFile myDoc;
        cout << "\nFile is currently in use...\n" << endl;
    } 

    cout << "--- End of Program ---" << endl;
    return 0;
}
