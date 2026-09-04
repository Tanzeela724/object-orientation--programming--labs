#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ofstream fout("notes.txt");

    fout << "This is line 1." << endl;
    fout << "This is line 2." << endl;
    fout << "This is line 3." << endl;

    fout.close();

    ifstream inFile("notes.txt");

    string line;
    while(getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    ofstream appendFile("notes.txt", ios::app);

    appendFile << "Name: tanzeela" << endl;
    appendFile << "Roll Number: SE-2025-36" << endl;

    appendFile.close();

    cout << "Name and roll number appended successfully." << endl;

    return 0;
}
