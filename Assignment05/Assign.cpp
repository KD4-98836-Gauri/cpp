/*
Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate should be of
type Date.
Create a class Student with data members id, marks, course and joining date, end date. The joining
date and end date should be of type date.
Implement above classes. Test all functionalities in main().
(Note - Only Perform the Association in the above case. No need of Inheritance)
*/
#include<iostream>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;
    public:
    Date(void):day(0),month(0),year(0)
    { }
    Date(int day,int month,int year):day(day),month(month),year(year)
    { }
    void acceptDate()
    {
        cout<<"day:";
        cin>>day;
        cout<<"month:";
        cin>>month;
        cout<<"year:";
        cin>>year;

    }
    void printDate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
   
    


};

class Person
{
    private:
    string name;
    string address;
    Date dob;
    public:
    Person(void):name(" "),address(" ")
    { }
    Person(string name , string address):name(name),address(address)
    { }
    Person(string name , string address, Date dob):name(name),address(address),dob(dob)
    { }

    Person(string name , string address, int day, int month , int year):name(name),address(address),dob(day,month,year)
    { }
    void acceptPerson()
    {
        cout<<"name:"<<endl;
        cin>>name;
        cout<<"address"<<endl;
        cin>>address;
        cout<<"Date of Birth"<<endl;
        this->dob.acceptDate();
    }
    void printPerson()
    {
        cout<<"name:"<<name<<endl;
        cout<<"address:"<<address<<endl;
        cout<<"Date of Birth:";
        this->dob.printDate();
    }
};
// Create a class Student with data members id, marks, course and joining date, end date. The joining
// date and end date should be of type date.

class Student
{
    private:
    int id;
    int marks;
    string course;
    Date joindate;
    Date enddate;
    public:
    Student(void): id(0), marks(0),course(" ")
    { }
    Student(int id,int marks , string course, Date joindate, Date enddate): id(id),marks(marks), course(course), joindate(joindate), enddate(enddate)
    { }
    Student(int id,int marks,string course, int day , int month, int year):id(id),marks(marks),course(course),joindate(day,month,year),enddate(day,month,year)
    { }
    void acceptStudent()
    {
        cout<<"id:"<<endl;
        cin>>id;
        cout<<"marks"<<endl;
        cin>>marks;
        cout<<"course:"<<endl;
        cin>>course;
        cout<<"enter joindate:";
        this->joindate.acceptDate();
        cout<<"enter enddate:";
        this->enddate.acceptDate();

    }
    void printStudent()
    {
        cout<<"id:"<<id<<endl;
        cout<<"marks:"<<marks<<endl;
        cout<<"course:"<<course<<endl;
        cout<<" joindate:";
        this->joindate.printDate();
        cout<<"enddate:";
        this->enddate.printDate();
    }

};
int main()
{
    cout<<"------Date------";
    Date d1;
    d1.acceptDate();
    d1.printDate();

    cout<<"-----Person-----";
    Person p1;
    p1.acceptPerson();
    p1.printPerson();
    cout<<"-----Student-----";
    Student s1;
    s1.acceptStudent();
    s1.printStudent();
    return 0;




}

