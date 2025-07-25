#include<iostream>
using namespace std;

class  Employee{
    private:
        string employeeID, employeeName;
        int experience;
        float salary;

    public:
        void addDetails(string id, string name, int exp, float salary){
            employeeID = id;
            employeeName = name;
            experience = exp;
            this-> salary = salary;
        }

        void showDetails(){
            cout << "The employee with name " << employeeName << " bearing " << employeeID << " having"
            <<  experience << "years  of  experience and receives a salary of Rs." << salary << "/-";
        }
};

int main(){
    string empName, empID;
    int empExp;
    float empSalary;

    cout << "enter your Name, Employee-ID, years of Experience & Salary: ";
    cin >> empName >> empID >> empExp >> empSalary;

    Employee emp1; //object created
    Employee *empPtr = &emp1; // pointer is pointing/referring to the object emp1

    //using pointer we are assigning the value to the object
    (*empPtr).addDetails( empID, empName, empExp, empSalary); 
    (*empPtr).showDetails();
   
  // using the pointer we are assigning the value to the object using pointer dereferencing & arrow operator
    empPtr->addDetails( empID, empName, empExp, empSalary); 
    empPtr->showDetails();
   
    //dynamically allocating memory for the pointer object(no object refered)
    //syntax: className *pointer_name = new className
    Employee *ptrEmp = new Employee; 
    ptrEmp->addDetails("PM123","Ajay",3,50000.00);
    ptrEmp->showDetails();
    // emp1.addDetails <==> (*empPtr).addDetails <==> empPtr -> addDetails
}
