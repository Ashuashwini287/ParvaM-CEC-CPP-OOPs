#include<iostream>
using namespace std;

class Company{
    private:
        string cin;
        int totalWorth=0; 

    public:
    string gstNum,location;
    int numOfEmp;

     //setter method
    setDetails(string cinNum,int worth){
        cin=cinNum;
        totalWorth=worth;
    }

    //getter method
    void getDetails(string gstNumber){
        cout << "Corporate Identity Number: " << cin << endl;
        cout << "Total Worth of the Company: " << totalWorth << endl;
    }

    void getaddBasicDetails(); // decelar the member function
};

//function definaton outside the class
//syntax return_type class_name ::member_function
void Company :: addBasicsDetails(){
    cout << "GST Number: " << gstNum << endl;
    cout << "Location: " << location << endl;
    cout << "Number of Employees: " << numOfEmp << endl;
}

int main?(){
    Company comp1;//object created
    comp1.gstNum="1234DIFIU239";
    comp1.location="Bengaluru";
    comp1.numOfEmp=50;
    comp1.getBasicsDetails();

    string cinNumber;
    int companyWorth;
     
    cinNumber="458659";
    companyWorth=5000000;
     
    comp1.setDetails(cinNumber,companyWorth);
    comp1.getDetails(comp1.gstNum);
}