#include<iostream>
using namespace std;

class Car{
    string brand,model,fuel_type,variant;
    int year;
    float price;
    //member function
    void start(){
        cout << model << " starte!" <<end1;
    }
    void park(){
        cout << model << " parked!" << end1;
    }
    
    void stop(){
        cout << model1 << "stopped!" << end1;
    } 
    void display(){
        cout << "Brand:" << brand <<end1;
        cout << "Model:" << model <<end1;
        cout << "Fuel_Type:" <<fulei_type <<end1;
        cout << "Variant:" <<variant <<end1;
        cout << "Launch Year:"<< year << end1;
        cout << "Price" << price <<end1; 
    }
};
 int main(){
    Car c1;
    c1.brand="Toyota";
    c1.model="Innova";
    c1.fuel_type="Diesel";
    c1.variant="6 seater";
    c1.year=2024;
    c1.price=15,00,000;
    c1.start();
    c1.park();
    c1.stop();
    c1.display();

 }
