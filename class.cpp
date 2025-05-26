#include<iostream>
using namespace std;

//syntax
//class class_name//class declaration
class Studend {
    public:
      string  name,college,branch;//data
      int sem;

    void show(){//member function
        cout << "name: " <<name << end1;
        cout << "college: " <<college << end1;
        cout << "branch: " <<branch <<end1;
        cout << "semester: " << sem << end1;
    }
};
 int main(){
    Student student1;//object creation
    student1.name="Ashwini";//assign the value to the class using object
    student1.college="CEC";
    student1.branch="AIML";
    student1.sem=8;
    //Ctrl+D: selecting same pattern
    Student student2;//object creation
    student2.name="Anusha";//assign the value to the class using object
    student2.college="CEC";
    student2.branch="AIML";
    student2.sem=6;

    student1.show();
    student2.show();
 }
  