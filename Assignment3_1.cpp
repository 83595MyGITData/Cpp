/*
Q1. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.
Optional – Use the Modular Apporach
*/
#include<iostream>
using namespace std;
class Cylinder{
      private:
                double radius;
                double height;
                static const double PI;
      public:

            Cylinder()
            {
                radius=10;
                height=100;
            }
            Cylinder(double radius,double height )
            {
                this->radius=radius;
                this->height=height;
            }
            double getRadius()
            {
                return radius;
            }

            double getHeight()
            {
                return height;
            }
            double getVolume()
            {
                double volume = PI*radius*radius;
                return volume;
            }

            double setRadius(double radius)
            {
                this->radius=radius;
                return 0;
            }
            void setHeight(double height)
            {
                this->height=height;
            }

            void displayVolume()
            {
                cout<<"Volume of Cylindder is "<<getVolume()<<endl;
            }

                
};
 const double Cylinder:: PI=3.14;

int main()
{   
    Cylinder c;
    int n,value;
    do
    {

        cout<<"----------------------------"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"1.GetRadius"<<endl;
        cout<<"2.SetRadius"<<endl;
        cout<<"3.GetHeight"<<endl;
        cout<<"4.SetHeight"<<endl;
        cout<<"5.GetVolume"<<endl;
        cout<<"6.PrintVolume"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>n;

        switch(n)
        {
            case 0:cout<<"THank you"<<endl;
                    break;
            case 1: 
                    cout<<"Radius:"<<c.getRadius()<<endl;
                    
                    break;
            case 2:{
                    cout<<"Enter Value for Radius:"<<endl;
                    cin>>value;
                    c.setRadius(value);
                    break;}
            case 3: 
                    cout<<"Height:"<<c.getHeight()<<endl;
                    break;
            case 4:{
                    cout<<"Enter Value for Height:"<<endl;
                    cin>>value;
                    c.setHeight(value);}
                    
                    break;
            case 5: c.getVolume();
                    cout<<"Volume Calculated Successfully \nTo check volume click 6.PrintVolume"<<endl;
                    break;
            case 6:
                    c.displayVolume();
                    break;
            default : cout<<"Invalid Choice!!!!!"<<endl;
                    break;
        }

    } while (n!=0);
    
    return 0;
}