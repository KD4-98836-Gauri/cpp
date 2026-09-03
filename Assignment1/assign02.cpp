/*
Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/
#include<iostream>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;
    public:

    void initDate()
    {
        day=25;
        month=8;
        year=2026;
        
    } 
    void printDateOnConsole()
    {
        cout<<"Today's date:"<<day<<"/"<<month<<"/"<<year;
    }
    void acceptDateFromConsole()
    {
        cout<<"Enter day";
        cin>>day;
        cout<<"Enter month";
        cin>>month;
        cout<<"Enter year";
        cin>>year;
    }
    bool isLeapYear()
    {
        if(year%4 ==0){
            return true;
        }
        else{
            return false;
        }

    }

};
int menuchoice(){
    int choice;
    cout<<"\n 0: Exit the program";
    cout<<"\n 1: InitDate";
    cout<<"\n 2.Print date on console";
    cout<<"\n 3.Accept date from console";
    cout<<"\n 4. Cheak the leap year";
    cout<<"\n Enter Choice";
    cin>>choice;
    return choice ;


}
int main()
{
    Date d1;
    int choice;
    while((choice=menuchoice())!=0)
    {
        switch(choice)
        {
            case 1:
            d1.initDate();
            break;
            case 2:
            d1.printDateOnConsole();
            break;
            case 3:
            d1.acceptDateFromConsole();
            break;
            case 4:
    
            d1.isLeapYear();
            if(true){
                cout<<"leap year";
            }
            else{
                cout<<"not a leap year";
            }
            break;
        }
    }
    return 0;
}
