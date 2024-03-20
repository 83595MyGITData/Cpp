/*
1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values. */

#include<iostream>
using namespace std;
class Box{
    private:
        int length;
        int width;
        int height;

    public:
        Box()
        {
            length= 10;
            width=20;
            height=5;
        }
        Box(int value)
        {
            length=value;
            width=value;
            height=value;

        }

        Box(int length,int width,int height)
        {
            this->length=length;
            this->width=width;
            this->height=height;

        }


        void calulatevolume()
        {
            int vol= length*width*height;
            cout<<"Volume : "<<vol<<endl;

        }
    

};
int main()
{
    int n;
    do{
        cout<<"0.Exit"<<endl;
        cout<<"1.Calculate Volume with default values"<<endl;
        cout<<"2.Calculate Volume with length,breadth and height with same value"<<endl;     
        cout<<"3.Calculate Volume with different length,breadth and height values."<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>n;

        switch(n)
        {
            case 0: cout<<"-------Thank you-----------"<<endl;
                    break;
            case 1:
                    {
                        Box b1;
                        b1.calulatevolume();
                    }
                    break;
            case 2:
                    {
                        int x;
                        cout<<"Enter the length,breadth and height with same value :"<<endl;
                        cin>>x;
                        Box b1(x);
                        b1.calulatevolume();

                    }
                    break;
            case 3:
                    {
                        int x,y,z;
                        cout<<"Enter the length,breadth and height :"<<endl;
                        cin>>x>>y>>z;
                        Box b1(x,y,z);
                        b1.calulatevolume();

                    }
                    break;
            default:  cout<<"Invalid Choice!!!!"<<endl;
                    break;



        }
    }while(n!=0);
    return 0;
}