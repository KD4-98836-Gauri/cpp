#include<iostream>
using namespace std;
class Employee
{
    protected:
    int id;
    double salary;
    public:
    Employee(void):id(0),salary(0.0)
    { }
    Employee(int id,double salary):id(id),salary(salary)
    { }
    void setID(int id)
    {
        this->id=id;
    }
    int getID()
    {
        return id;
    }
    void setSalary(double)
    {
        this->salary=salary;
    }
    double getSalary()
    {
        return salary;
    }
    void accept()
    {
        cout<<"enter id"<<endl;
        cin>>id;
        cout<<"enter salary"<<endl;
        cin>>salary;
    }
    void display()
    {
        cout<<"id:"<<id;
        cout<<"salary"<<salary;

    }


};
class Manager:virtual public Employee
{
    protected:
    double bonus;
    public:
    Manager(void): bonus(0.0)
    { }
    Manager(int id,double salary,double bonus):bonus(bonus),Employee(id,salary)

    { }
    void setBonus(double bonus)
    {
        this->bonus=bonus;
    }
    double getBonus()
    {
        return bonus;
    }
    void acceptManager()
    {
        Employee::accept();
        cout<<"enter bonus";
        cin>>bonus;
    }
    void displayManager()
    {
        Employee::display();
        cout<<"Bonus"<<bonus<<endl;
    }



};

class Salesman:virtual public Employee
{
    protected:
    double commission;
    public:
    Salesman(void):commission(0.0)
    { }
    Salesman(double commission, int id,double salary):commission(commission),Employee(id,salary)
    { }
    void setCommission(double commission)
    {
        this->commission=commission;
    }
    double getCommision()
    {
        return commission;
    }
    void accept()
    {
        Employee::accept();
        cout<<"commision"<<endl;
        cin>>commission;
    }
    void display()
    {
        Employee::display();
        cout<<commission<<endl;

    }
    void acceptSalesman()
    {
        Employee::accept();
        cout<<"commission";
        cin>>commission;
    }
    void displaySalesman()
    {
        Employee::display();
        cout<<commission<<commission<<endl;

    }

};
class SalesManager:public Manager, public Salesman
{
    public:
    SalesManager(void)
    { }
    SalesManager(int id,double salary , double bonus,double commission):Employee(id,salary), Manager(id,salary,bonus),Salesman(id,salary,commission)
    { }
    void accept()
    {
        Employee::accept();
        cout<<"enter bonus";
        cin>>bonus;
        cout<<"enter commission";
        cin>>commission;


    }
    void display()
    {
        Employee::display();
        cout<<"bonus"<<bonus;
        cout<<"commision:"<<commission;
    }


};

int menuList()
{
    int choice;
    cout<<"0.exit"<<endl;
    cout<<"1.Add Manager"<<endl;
    cout<<"2.Add salesman"<<endl;
    cout<<"3.Add Salesmanager"<<endl;
    cout<<"4. Display the count of all employees with respect to designation"<<endl;
    cout<<"5.Display All Managers"<<endl;
    cout<<"6. Display All Salesman"<<endl;
    cout<<"7.Display All SalesManagers"<<endl;
    cout<<"enter choice";
    cin>>choice;
    return choice;
}

int main()
{
    //array to store objects
    Manager managers[10];
    Salesman salesmen[10];
    SalesManager salesmanager[10];
    int managercount=0;
    int salesmencount=0;
    int salesmanagercount=0;
    int choice;
    while((choice=menuList())!=0)
    {
        switch(choice)
        {
            case 1:
            //add manager
            if(managercount<10)
            {
                managers[managercount].acceptManager();
                managercount++;
                cout<<"manager added"<<endl;

            }
            else{
                cout<<"manager limit reached"<<endl;
            }
            break;
            case 2:
            //add salesman
            if(salesmencount<10)
            {
                salesmen[salesmencount].acceptSalesman();
                salesmencount++;
                cout<<"salesman added succes"<<endl;
            }
            else
            {
                cout<<"salesman limit excced"<<endl;
            }
            break;
            case 3:
            //Add Salesmanager
            if(salesmanagercount<10)
            {
                 salesmanager[salesmanagercount].acceptSalesman();
                 salesmanagercount++;
                 cout<<"salesmanager added"<<endl;
                 
            }
            else{
                cout<<"salesmanager limit exceed";
            }
            case 4:
            
                //Display the count of all employees with respect to designation
            cout<<"managercount"<< managercount<<endl;
            cout<<"salesmencount"<<salesmencount<<endl;
            cout<<" salesmanagercount"<< salesmanagercount<<endl;
            break;
            
            case 5:
            //.Display All Managers
            for(int i=0;i<managercount;i++)
            {
                managers[i].displayManager();
            }
            break;
            case 6:
            //display  Display All Salesman
            for(int i=0;i<salesmencount;i++)
            {
                salesmen[i].displaySalesman();
            }
            break;
            case 7:
            //Display All SalesManagers
            for(int i=0;i<salesmanagercount;i++)
            {
                salesmanager[i].display();
            }
            break;
            default:
                cout<<"invalid";

            

        }
    }
    return 0;

}
