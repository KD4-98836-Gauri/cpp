/*
Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total
*/
#include<iostream>
using namespace std;
class Tollbooth
{
    private:
    unsigned no_of_cars;
    double total_amount;
    unsigned  payingcars;
    unsigned nonpaying_cars;
    
    public:
    Tollbooth(){
        cout<<"Number of cars and total amount";
        this->no_of_cars=0;
        this->total_amount=0;
         payingcars=0;
         nonpaying_cars=0;
    }
    void paycar(){
        payingcars++;
        no_of_cars++;
        total_amount=total_amount+0.50;

    }
    void nonpaycar(){
        no_of_cars++;
        nonpaying_cars++;

    }
    void printOnConsole(){
        cout<<"Total number of cars"<<no_of_cars<<endl;
        cout<<"Total cars who not pay  "<<nonpaying_cars<<endl;
        cout<<"paying cars"<<payingcars<<endl;
        cout<<"total_amout"<<total_amount<<endl;
    }
        

};
int main()
{
    Tollbooth car1;
    car1.paycar();
    car1.nonpaycar();
    car1.printOnConsole();

    
}
    


    
  







