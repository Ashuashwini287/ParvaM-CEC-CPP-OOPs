#include<iostream>
using namespace std;

class Animal{ //Base    class -level 0
    string name;
    public:
        void setName(string animalName){
            name = animalName;
        }
        void showAnimal(){
            cout << "Name of the Animal:" << name << endl;
        }
};

//Animal-> Carnivore(symbolic representation)
class Carnivore : public Animal{ //Derived class /base class-level 1
    string vegetation;
    public:
        void setFood(string food){
            vegetation = food;
        }

        void showFood(){
            cout << " Food Type of Animal:" << vegetation << endl;
        }
};

//Mammal ->Carnivore (Symbolic Representation)
class Mammal : public Carnivore{ // Dervied Class - Level 2
    string habitat;
    public:
        void setHabitat(string place){
            habitat = place;
        }
        void showHabitat(){
            cout << "Living place: " << habitat << endl;
        }

};

int main(){
    string animal_name,food_type,place_of_living;

    cout << " Enter the Name of the Animal , food type & place of living: ";
    cin >> animal_name >> food_type >> place_of_living;

    Animal a1;
    a1.setName(animal_name);
     
    Carnivore c1;
    c1.setName(animal_name);
    c1.setFood(food_type);

    Mammal m1;
    m1.setName(animal_name);
    m1.setFood(food_type);
    m1.setHabitat(place_of_living);

    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();
}
