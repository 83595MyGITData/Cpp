/*
2. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
Allocate the memory for the the object dynamically and test the functunalities using time ptr.
*/
#include<iostream>
using namespace std;
class Time{
    private:
        int h;
        int m;
        int s;

    public:

        Time()
        {
            h=0;
            m=0;
            s=0;

        }
        Time(int h,int m,int s)
        {
            this->h=h;
            this->m=m;
            this->s=s;
        }

        int getHour()
        {
            return h;
        }
        int getMinute()
        {
            return m;
        }
        int getSeconds()
        {
            return s;
        }
        void printTime()
        {
            cout<<"Time:HH:MM:SS - "<<h<<":"<<m<<":"<<s<<endl;
        }
        void setHour(int h){

                this->h=h;

        }
        void setMinute(int m){
            this->m=m;

        }
        void setSeconds(int s){
            this->s=s;
        }


};
int main()
{
    int h1,s1,m1;

       Time *ptr=new Time;
       

        ptr->getHour();
        ptr->getMinute();
        ptr->getSeconds();
        
        ptr->printTime();

        cout<<"Enter Value for hours:"<<endl;
        cin>>h1;
        ptr->setHour(h1);

        cout<<"Enter Value for minutes:"<<endl;
        cin>>m1;
        ptr->setMinute(m1);

        cout<<"Enter Value for seconds:"<<endl;
        cin>>s1;
        ptr->setSeconds(s1);


        ptr->getHour();
        ptr->getMinute();
        ptr->getSeconds();
        
        ptr->printTime();

        delete ptr;
        ptr=NULL;

        //
        Time *ptr1=new Time(10,20,30);
        
        ptr1->getHour();
        ptr1->getMinute();
        ptr1->getSeconds();
        
        ptr1->printTime();

        cout<<"Enter Value for hours:"<<endl;
        cin>>h1;
        ptr1->setHour(h1);

        cout<<"Enter Value for minutes:"<<endl;
        cin>>m1;
        ptr1->setMinute(m1);

        cout<<"Enter Value for seconds:"<<endl;
        cin>>s1;
        ptr1->setSeconds(s1);


        ptr1->getHour();
        ptr1->getMinute();
        ptr1->getSeconds();
        
        ptr1->printTime();

        delete ptr1;
        ptr1=NULL;


    return 0;
}