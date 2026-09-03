#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee
{
protected:
    int id;
    string name;
    double salary;

public:
    Employee()
    {
        id = 0;
        name = "";
        salary = 0;
    }

    Employee(int id, string name, double salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    virtual void accept()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    virtual string getDesignation()
    {
        return "Employee";
    }

    virtual ~Employee()
    {
    }
};

// Manager class
class Manager : public Employee
{
public:
    void accept()
    {
        Employee::accept();
    }

    void display()
    {
        cout << "\n--- Manager ---" << endl;
        Employee::display();
    }

    string getDesignation()
    {
        return "Manager";
    }
};

// Salesman class
class Salesman : public Employee
{
public:
    void accept()
    {
        Employee::accept();
    }

    void display()
    {
        cout << "\n--- Salesman ---" << endl;
        Employee::display();
    }

    string getDesignation()
    {
        return "Salesman";
    }
};

// SalesManager class
class SalesManager : public Manager, public Salesman
{
public:
    void accept()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\n--- SalesManager ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    string getDesignation()
    {
        return "SalesManager";
    }
};

int menu()
{
    int choice;

    cout << "\n========== MENU ==========" << endl;
    cout << "1. Add Manager" << endl;
    cout << "2. Add Salesman" << endl;
    cout << "3. Add Salesmanager" << endl;
    cout << "4. Display count of all employees" << endl;
    cout << "5. Display All Managers" << endl;
    cout << "6. Display All Salesman" << endl;
    cout << "7. Display All SalesManagers" << endl;
    cout << "0. Exit" << endl;

    cout << "Enter choice: ";
    cin >> choice;

    return choice;
}

int main()
{
    Employee* arr[100];

    int count = 0;
    int managerCount = 0;
    int salesmanCount = 0;
    int salesManagerCount = 0;

    int choice;

    do
    {
        choice = menu();

        switch(choice)
        {
        case 1:
            arr[count] = new Manager();
            arr[count]->accept();

            count++;
            managerCount++;

            cout << "Manager added successfully." << endl;
            break;

        case 2:
            arr[count] = new Salesman();
            arr[count]->accept();

            count++;
            salesmanCount++;

            cout << "Salesman added successfully." << endl;
            break;

        case 3:
            arr[count] = new SalesManager();
            arr[count]->accept();

            count++;
            salesManagerCount++;

            cout << "SalesManager added successfully." << endl;
            break;

        case 4:
            cout << "\n--- Employee Count ---" << endl;
            cout << "Managers      : " << managerCount << endl;
            cout << "Salesman      : " << salesmanCount << endl;
            cout << "SalesManagers : " << salesManagerCount << endl;
            cout << "Total Employees: " << count << endl;
            break;

        case 5:
            cout << "\n--- All Managers ---" << endl;

            for(int i = 0; i < count; i++)
            {
                if(arr[i]->getDesignation() == "Manager")
                {
                    arr[i]->display();
                }
            }
            break;

        case 6:
            cout << "\n--- All Salesman ---" << endl;

            for(int i = 0; i < count; i++)
            {
                if(arr[i]->getDesignation() == "Salesman")
                {
                    arr[i]->display();
                }
            }
            break;

        case 7:
            cout << "\n--- All SalesManagers ---" << endl;

            for(int i = 0; i < count; i++)
            {
                if(arr[i]->getDesignation() == "SalesManager")
                {
                    arr[i]->display();
                }
            }
            break;

        case 0:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while(choice != 0);

    // Delete dynamically allocated objects
    for(int i = 0; i < count; i++)
    {
        delete arr[i];
    }

    return 0;
}