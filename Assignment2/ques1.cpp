/*
Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.
*/
#include<iostream>
using namespace std;
class Volume{
    private:
    int length;
    int width;
    int height;
    public:
    //parameterless constructor
    Volume(void){
       cout<<"Volume (void)"<<endl;
       this->length=10;
       this->width=20;
       this->height=30; 

    }
    //parameterized constructor
    Volume(int length , int width, int height)
    {
        cout<<"Volume(int length,int width,int height"<<endl;
        this->length=length;
        this->width=width;
        this->height=height;
    }
    //single parameterized ctor
    Volume(int value){
        this->length=value;
        this->width=value;
        this->height=value;


    }
    void acceptrecord(void)
    {
        cout<<"length:";
        cin>>length;
        cout<<"width:";
        cin>>width;
        cout<<"height:";
        cin>>height;
    }
    void printrecord(void)
    {
        cout<<"length:"<<length<<endl;
        cout<<"width:"<<width<<endl;
        cout<<"height:"<<height<<endl;
    }
    int calculate()
    {
        return length * width * height;
    }

};

int menu (void)
{
    int choice;
    cout<<"0.exit"<<endl;
    cout<<"1.Calculate Volume with default values"<<endl;
    cout<<"2. Calculate Volume with length,breadth and height with same value"<<endl;
    cout<<"3.Calculate Volume with different length,breadth and height values."<<endl;
    cout<<" Enter Choice"<<endl;
    cin>>choice;
    return choice;
}

int main()
{

    Volume box;
    int choice;
   while((choice=menu())!=0)
   {
    switch(choice)
    {
        case 1:
        {
        Volume box1;
        cout<<"Volume: "<<box1.calculate()<<endl;
        break;
        }
        case 2:
        {
        Volume box2(10);
        cout<<"volume:"<<box2.calculate()<<endl;
        break;
        }
        case 3:
        {
        Volume box3 (10,20,30);
        cout<<"volume: "<<box3.calculate()<<endl;
        break;
        }
    }
   }


   return 0;
}
