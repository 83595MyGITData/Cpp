#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
       // cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
       // cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
       // cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
     //   cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
       // cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
       // cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
      //  cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
       // cout << "Inside Salesman(int,double,double)" << endl;
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
    ~Salesman()
    {
       // cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
       // cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        //cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
      //  cout << "~Salesmanager()" << endl;
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
    int choice;
    int index =0;
    int CManager=0;
    int Cemployee=0;
    int CSalesman=0;
    int CSalesManager=0;

    Employee *Smptr[10];
    do
    {
        cout<<"0.Exit"<<endl;
        cout<<"1.Accept Employee,Manager,Salesman,SalesManager"<<endl;
        
        cout<<"2.Display the count of all employees with respect to designation"<<endl;
        cout<<"3.Display All Managers"<<endl;
        cout<<"4.Display All Salesman"<<endl;
        cout<<"5.Display All SalesManagers"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>choice;
        
        switch(choice)
        {
            case 0:
                    cout<<"Thank you"<<endl;

                    break;
            
            case 1:

                    int ch;
                    cout<<"1.Accept Employee"<<endl;
                    cout<<"2.Accept Managers"<<endl;
                    cout<<"3.Accept Salesman"<<endl;
                    cout<<"4.Accept SalesManagers"<<endl;
                    //cout<<"9.Back to Main Menu"<<endl;
                    cout<<"Enter your Choice:"<<endl;
                    cin>>ch;
                            
                switch(ch)
                {
                
                case 1:

                        if(index<10)
                        {
                            Smptr[index]=new Employee();
                            Smptr[index]->accept();
                            index ++;
                            //Cemployee++;
                        }
                        else{
                            cout<<"Array is Full"<<endl;
                        }

                        break;
                case 2:
                        if(index<10)
                        {
                            Smptr[index] = new Manager();
                            Smptr[index]->accept();
                            index ++;
                            //CManager++;
                        }
                        else{
                            cout<<"Array is Full"<<endl;
                        }

                        break;
                case 3:
                        if(index<10)
                        {
                            Smptr[index]=new Salesman();
                            Smptr[index]->accept();
                            index ++;
                            //CSalesman++;

                        }
                        else{
                            cout<<"Array is Full"<<endl;
                        }

                        break;
                case 4:
                        if(index<10)
                        {
                            Smptr[index]=new SalesManager();
                            Smptr[index]->accept();
                            index ++;
                           // CSalesManager++;

                        }
                        else{
                            cout<<"Array is Full"<<endl;
                        }

                        break;

                    }
                
                    break;
            case 2:
                    

                    cout<<"-------------------------------"<<endl;
                    for(int i=0;i<index;i++)
                    {
                        Smptr[i]->display();
                    }
                    for(int i=0;i<index;i++)
                    {
                    
                    if(typeid(*Smptr[i])==typeid(Manager))
                    {
                        CManager++;
                    }}

                    for(int i=0;i<index;i++)
                    {
                    if(typeid(*Smptr[i])==typeid(Employee))
                    {
                        Cemployee++;
                    }}

                    for(int i=0;i<index;i++)
                    {
                    if(typeid(*Smptr[i])==typeid(Salesman))
                    {
                        CSalesman++;
                    }}
                    
                    for(int i=0;i<index;i++)
                    {
                    if(typeid(*Smptr[i])==typeid(SalesManager))
                    {
                        CSalesManager++;
                    }
                    }
                    cout<<"Total No of Employees:"<<Cemployee<<endl;
                    cout<<"Total No of Manager:"<<CManager<<endl;
                    cout<<"Total No of Salesman:"<<CSalesman<<endl;
                    cout<<"Total No of SalesManager:"<<CSalesManager<<endl;

                    break;
            case 3:
                    for(int i=0;i<index;i++){
                        if(typeid(*Smptr[i])==typeid(Manager))
                        {
                            Smptr[i]->display();
                        }
                    }
                    break;
            case 4:
                
                    for(int i=0;i<index;i++){
                        if(typeid(*Smptr[i])==typeid(Salesman))
                        {
                            Smptr[i]->display();
 
                        }
                    }
                    break;
            case 5:
                    for(int i=0;i<index;i++)
                    {
                        if(typeid(*Smptr[i])==typeid(SalesManager))
                        {
                            Smptr[i]->display();
                        }
                    }
                    break;
            default:
                    break;
        }
    } while (choice!=0);
    
}       

int main2()
{
    // Employee *eptr = new Employee();
    // Employee *eptr = new Manager();
    // Employee *eptr = new Salesman();
    Employee *eptr = new SalesManager();
    eptr->accept(); // Late Binding
    eptr->display();

    delete eptr;
    eptr = NULL;
    return 0;
}

int main1()
{
    // Employee obj;
    // Manager obj;
    // Salesman obj;
    SalesManager obj;
    obj.accept();
    obj.display();
    return 0;
}