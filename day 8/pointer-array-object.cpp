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
            <<  experience << "years  of  experience and receives a salary of Rs." << salary << "/-" << endl;
        }
};

class Skill : public Employee{ //derived class(single inheritance)
    private:
        int skillCount;
        string skills[10]; //normal array

    public:
        void setSkills(int count){
            cout << "Enter the " << count << "technologies you're familiar with: " << endl;
            for(int i = 0; i < count; i++){ //array initialization
            cout << " Skill " << i+1 << ":" ;
            cin >> skills[i];
            }
        }
        void showSkills(){
            cout << "Skills known: " <<endl;
            for(int i = 0; i < skillCount; i++){ //display the content of skill array
            cout << "i+1"  << "." << skills[i] << endl;
    }
}

};

int main(){
    string emp_name, emp_id;
    int emp_exp, skill_count;
    float emp_salary;

    cout << "Enter the following details of the Employee: " << endl;
    cout << " Employee ID, Name, Years of Experience, Salary" << endl;
    cin >> emp_id >> emp_name >> emp_exp >> emp_salary;

    Skill s1;
    Skill *emp1 = &s1;

    emp1->addDetails(emp_id, emp_name, emp_exp, emp_salary);
    emp1->showDetails();

    cout << "Enter the number of technologies you know: " << endl;
    cin >> skill_count;

    emp1->setSkills(skill_count);
    emp1->showDetails();
    emp1->showSkills();
}