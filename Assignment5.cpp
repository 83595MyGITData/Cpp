/*
Q1. Implement following classes. Test all functionalities in main().
Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.

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

    void acceptperson()
        {
            cout<<"Enter name:"<<endl;
            cin>>name;
            cout<<"Enter Address:"<<endl;
            cin>>address;
            cout << "Enter Date of Birth- " << endl;
            dob.acceptDate();


        }
        void displayperson()
        {
             cout<<"-------Person Data-----------"<<endl;
            //cout<<"Empid: "<<empid<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
           // cout<<"Dept: "<<dept<<endl;
            cout<<"DOB:"<<endl;
            dob.displayDate();
        }

};
class employee
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
        void acceptemployee()
        {
            cout<<"Enter Empid: "<<endl;
            cin>>empid;
            cout<<"Enter name:"<<endl;
            cin>>name;
            cout<<"Enter salary:"<<endl;
            cin>>salary;
            cout<<"Enter Dept:"<<endl;
            cin>>dept;
            cout << "Enter Date of Joining - " << endl;
            d.acceptDate();


        }
        void displayemployee()
        {
            cout<<"-------Employee Data-----------"<<endl;
            cout<<"Empid: "<<empid<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Dept: "<<dept<<endl;
            cout<<"DOJ:"<<endl;
            d.displayDate();
        }


};

int main()
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
                    e1.acceptemployee();

                    break;
            case 2: 
                    e1.displayemployee();
                    break;
            case 3:
                    p1.acceptperson();
                    break;
            case 4:
                    p1.displayperson();
                    break;
            default: 
                    cout<<"Invalid choice"<<endl;
                    break;
        }  

    } while (ch!=0);
    


    return 0;
}