#include<iostream>
#include<fstream> // header file for handling the files (read/write)
using namespace std;

int main(){
    //Writing in the file
    ofstream out("sample.txt");
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name >> age;
   out << "Hello " << name << "!"; 
   out << "You're " << age << "years old." << endl; 
    out.close();

    ifstream read("sample.txt");
    string line;
    cout << "File Contains: " << line << endl;
    while(getline(read, line)){
        cout << line << endl;
    }
    read.close();
}