#include<iostream>
using namespace std;

int main(){
    int a;
    //syntax for declaring the pointer:
    //datatype*pointer_name
    //assign the adress to the pointer:variable_name
    //*refers to the pointer variable
    //& refers to the address variable
    // ptr refers to the adress of the pointer
    //*ptr refers to the value of the pointrer

    int*ptr=&a;

    float decimal;
    float *f=&decimal;

    cout << "Enter the value of a:";
    cin >> a;

    cout << " Value of a:" << a << endl;
    cout << " Address of a:" << &a << endl;
    cout << "Value of Pointer(ptr):" <<ptr <<endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value pointed by ptr: " << *ptr <<endl;

    cout << " Value of decimal:" << decimal<< endl;
    cout << " Address of decimal:" << &decimal << endl;
    cout << "Value of Pointer(f):" << f <<endl;
    cout << "Address of ptr: " << &f << endl;
    cout << "Value pointed by ptr: " << *f <<endl;
}