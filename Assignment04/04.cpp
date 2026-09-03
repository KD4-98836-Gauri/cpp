#include <iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;

    static const double PI;

public:

    // Default constructor
    Cylinder() : radius(0), height(0)
    {
    }

    // Parameterized constructor
    Cylinder(double radius, double height)
        : radius(radius), height(height)
    {
    }

    // Getter for radius
    double getRadius()
    {
        return radius;
    }

    // Setter for radius
    void setRadius(double radius)
    {
        this->radius = radius;
    }

    // Getter for height
    double getHeight()
    {
        return height;
    }

    // Setter for height
    void setHeight(double height)
    {
        this->height = height;
    }

    // Calculate volume
    double calculateVolume()
    {
        return PI * radius * radius * height;
    }
};

// Initialize static member
const double Cylinder::PI = 3.14;


int main()
{
    Cylinder c1;

    double r, h;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter height: ";
    cin >> h;

    c1.setRadius(r);
    c1.setHeight(h);

    cout << "Radius = " << c1.getRadius() << endl;
    cout << "Height = " << c1.getHeight() << endl;
    cout << "Volume = " << c1.calculateVolume() << endl;

    return 0;
}