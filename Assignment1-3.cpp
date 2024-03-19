// Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();

#include<iostream>
using namespace std;
class Student{

    private:
    int roll_no;
    string name;
    int marks;    

public:

void initStudent()
{
    cout<<"--------In InitStudent-----------"<<endl;
    roll_no=1;
    name = "swapnil";
    marks = 90;

}
void printStudentOnConsole()
{
    cout<<"--------IN printStudent-----------"<<endl;
    cout<<"Rollno :"<<roll_no<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Marks:"<<marks<<endl;
}
void acceptStudentFromConsole()
{
    cout<<"-------InAcceptStudent--------------"<<endl;
    cout << "Enter roll no - ";
    cin >> roll_no;
    cout << "Enter name - ";
    cin >> name;
    cout << "Enter marks - ";
    cin >> marks;

}
};
int main()
{
    int n;
    Student s;
    do{
        cout<<"------------------------------"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"1.InitStudent"<<endl;
        cout<<"2.PrintStudentOnConsole"<<endl;
        cout<<"3.AcceptStudentOnConsole"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>n;

        switch(n)
        {
            case 0:
                    cout<<"----------------Thank you------------"<<endl;
                    break;
            case 1:
                    s.initStudent();
                    break;
            case 2:
                    s.printStudentOnConsole();
            
                    break;
            case 3:
                    s.acceptStudentFromConsole();
                    break;
            default:
                    cout<<"Invalid Choice!!!!!"<<endl;

        }

    }while(n!=0);
    return 0;
}