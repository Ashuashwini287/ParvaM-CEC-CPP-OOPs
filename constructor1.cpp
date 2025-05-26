#include<iostream>
 using namespace std;
 class Customer{
    string firstName,lastName;
    int age,rating;

    //Initialized the Constructor
    Customer(){
        firstName="John";
        lastName="Doe";
        age=20;
        rating=5;
    }

    void showRting(){
        cout << "Customer Name: " << firstName << " " << lastName << endl;
        cout << "Customer Age: " << age <<endl;
    }

    void giveRating(int rate);

    void showRating( int rate){
        cout << "You've given " << "star rating.Thanku You!" << endl;
    }
 };

 void Customer :: givenRating(int rate){
    rating=rate;
 }

 int main(){
    Customer cust1;


    cust1.showRating();
    cust1.showRating();

    Customer cust2;
+

    cust2.firstName="Ashwini";
    cust2.lastName="ashu";
    cust2.age=24;

    int starRating;

    cout << "Given your Rating(0 to 5):";
    cin >> starRating;
    cust2.giveRating(starRating);
    cust2.showRating();
 }

