/*
Q3. Implement following classes. Test all functionalities in main() of each created class. Note that
employee is inherited into manager and salesman.

*/

#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        id=1;
        salary=1000;

    }
    Employee(int id,double salary)
    {
        this->id=id;
        this->salary=salary;
    }
    void setId(int id)
    {
        this->id=id;
    }
    int getId()
    {
        return id;
    }
    void setSalary(double salary)
    {
        this->salary=salary;
    }
    void getSalary()
    {
        this->salary=salary;
    }
    virtual void accept()
    {
        cout<<"Enter Id:"<<endl;
        cin>>id;
        cout<<"Enter Salary:"<<endl;
        cin>>salary;

    }
    virtual void display()
    {
        cout<<"Id:"<<id<<endl;
        cout<<"Salary:"<<salary<<endl;
    }


};

class Manager: virtual public Employee
{
private:
    double bonus;
public:

    Manager()
    {
        bonus=100;
    }
    Manager(int id,double salary,double bonus): Employee(id,salary)
    {
        
        this->bonus=bonus;
    }
    void setBonus(double)
    {
        this->bonus=bonus;
    }
    double getBonus()
    {
        return bonus;
    }
    void accept()
    {
        cout<<"Enter Bonus:"<<endl;
        cin>>bonus;
    }
    void display()
    {
        cout<<"Bonus:"<<bonus<<endl;
    }
    void acceptManager()
    {
        //Employee::accept();
        cout<<"Enter bonus:"<<endl;
        cin>>bonus;
    
    }
    void displayManager()
    {
        //Employee::display();
        cout<<"Bonus:"<<bonus<<endl;
    }


};
class Salesman: virtual public Employee
{
private:
    double commission;
public:
    Salesman()
    {
        commission=100;
    }
    
    Salesman(int id,double salary,double commission)
   // Salesman(int id,double salary,double commission):Salesman(salary,commission)
    {
        //this->commission=commission;
    }
    void setCommision(double)
    {
        this->commission=commission;
    }
    double getComission()
    {
        return commission;
    }
    void acceptSalesman()
    {
        cout<<"Enter Commission:"<<endl;
        cin>>commission;
    }
    void displaySalesman()
    {
        cout<<"Commission:"<<commission<<endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }


};

class SalesManager: public Manager,public Salesman
{
public:
    SalesManager()
    {
    }
    SalesManager(int id,double salary,double bonus,double commission)
    {
        
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();

    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();    

    }
};


int main()
{
    //Manager E1(10,20,30);
   // E1.displayManager();
   SalesManager S1;
   
   S1.accept();

   S1.display();

    return 0;

}

