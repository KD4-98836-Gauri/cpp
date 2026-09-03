// Q1. Write a class to find volume of a Cylinder by using following members. (volume of
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// calculateVolume()
// Initialize members using constructor member initializer list

#include<iostream>
using namespace std;
class Cylinder{
    private:
    double radius;
    double height;
    static double PI;
    public:
    Cylinder():radius(0),height(0){};
    Cylinder(double radius,double height):radius(radius),height(height){};
    void setRadius(double radius){
        this->radius=radius;
       
    }
    void setHeight(double height){
        this->height=height;


    }
    double getRadius(void){
        return radius;
    }
   
    double getHeight(void ){
        return height;
    }
    double calculateVolume(){
        return PI * radius *radius *height;
      
    }
    
    


};

double Cylinder::PI=3.14;

int main(){
    Cylinder c1;
    c1.setHeight(10);
    c1.setRadius(10);
    cout<<"radius:"<<c1.getRadius()<<endl;
    cout<<"height:"<<c1.getHeight()<<endl;
   
   
    cout<< "volume:"<<c1.calculateVolume()<<endl;

    return 0;
}