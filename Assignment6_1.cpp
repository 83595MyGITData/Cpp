/*
Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type Date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
Employee class should be inherited from Person.
Implement following classes. Test all functionalities in main().
(Note - Perform the Association and Inheritance in the above case.) 
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
        Date()
        {
            day=1;
            month=1;
            year=1990;

        }
        void acceptDate()
        {
            cout<<"Enter Day: "<<endl;
            cin>>day;
            cout<<"Enter month: "<<endl;
            cin>>month;
            cout<<"Enter year: "<<endl;
            cin>>year;

        }
        void displayDate()
        {
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }



};

class person
{    
private:
    string name;
    string address;
    Date dob;

public:

    person()
    {
        name=" ";
        address=" ";
    }
    person(string name,string address)
    {
        this->name=name;
        this->address=address;

    }

    virtual void acceptData()
        {
            cout<<"Enter name:"<<endl;
            cin>>name;
            cout<<"Enter Address:"<<endl;
            cin>>address;
            cout << "Enter Date of Birth- " << endl;
            dob.acceptDate();


        }
        virtual void displayData()
        {
             cout<<"-------Personal Data-----------"<<endl;
            //cout<<"Empid: "<<empid<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
           // cout<<"Dept: "<<dept<<endl;
            cout<<"DOB:"<<endl;
            dob.displayDate();
        }

};
class employee : public person
{
private:
        int empid;
        string name;
        double salary;
        string dept;
        Date d;

public:
        employee()
        {
            empid=0;
            name=' ';
            salary=0;
            dept= ' ';

        }
        
        employee(int empid,string name,double salary,string dept)
        {
            this->empid=empid;
            this->name=name;
            this->salary=salary;
            this->dept=dept;

        }
        void acceptData()
        {   
            cout<<"Enter Empid: "<<endl;
            cin>>empid;
           
            cout<<"Enter salary:"<<endl;
            cin>>salary;
            cout<<"Enter Dept:"<<endl;
            cin>>dept;
            cout << "Enter Date of Joining - " << endl;
            d.acceptDate();

            person::acceptData();


        }
        void displayData()
        {   
            cout<<"-------Employee Data-----------"<<endl;
            cout<<"Empid: "<<empid<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Dept: "<<dept<<endl;
            cout<<"DOJ:"<<endl;
            d.displayDate();

            person::displayData();

        }


};
int main()
{
    employee e1;
    person p1;

    // e1.acceptData();
    // e1.displayData();

    // p1.acceptData();
    // p1.displayData();

    // employee *eptr=new employee();
    // eptr->acceptData();
    // eptr->displayData();

    person *eptr=new employee();
    eptr->acceptData();
    eptr->displayData();

    delete eptr;
    eptr=NULL;



    return 0;
}
int main1()
{
    employee e1;
    person p1;

    int ch;
   

    do
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"0.Exit"<<endl;   
        cout<<"1.Accept Employees"<<endl;
        cout<<"2.Display Employees"<<endl;
        cout<<"3.Accept Person"<<endl; 
        cout<<"4.Display Person"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>ch;

        switch(ch) 
        {
            case 0: cout<<"---------Thank you-----------"<<endl;
                    break;
            case 1:
                    e1.acceptData();

                    break;
            case 2: 
                    e1.displayData();
                    break;
            case 3:
                    p1.acceptData();
                    break;
            case 4:
                    p1.displayData();
                    break;
            default: 
                    cout<<"Invalid choice"<<endl;
                    break;
        }  

    } while (ch!=0);
    


    return 0;
}