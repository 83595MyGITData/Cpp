/*
Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
*/

#include<iostream>
using namespace std;
class tollbooth{
    private:
    unsigned int n;
    unsigned int nopay;
    unsigned int pay;
    double money;

    public:
    tollbooth(){
        n=0;
        money=0;
        nopay=0;
        pay=0;
    }

    void payingcar(){
        pay=pay+1;
        money=money+50;

        cout<<"Entry Successfull"<<endl;


    }
    void nonpayingcar(){
        nopay=nopay+1;
        cout<<"Entry Successfull"<<endl;

    }

    unsigned int getNopayCar()
    {
        return nopay;
    }
    unsigned int getpayCar()
    {
        return pay;
    }


    void total()
    {
        n=getpayCar()+getNopayCar();
        cout<<"No of Cars:"<<n<<endl;
        cout<<"Paying Cars:"<<getpayCar()<<endl;
        cout<<"Non Paying Cars:"<<getNopayCar()<<endl;
        
    }
    void display()
    {
        cout<<"-----------------------------------------"<<endl;
        cout<<"No of Pay Cars:"<<pay<<endl;
        cout<<"No of NonPAyCars:"<<nopay<<endl;
        cout<<"No of Cars:"<<n<<endl;
        cout<<"Money:"<<money<<endl;
        cout<<"-----------------------------------------"<<endl;

    }

};

int main()
{
    tollbooth a;
    int n;
    do{
        cout<<"-----------------------------------------"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"1.Paying Car"<<endl;
        cout<<"2.Non Paying Car"<<endl;     
        cout<<"3.Total"<<endl;
        cout<<"4.Display Data"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>n;

        switch(n)
        {
            case 0: cout<<"-------Thank you-----------"<<endl;
                    break;
            case 1:
                    a.payingcar();

                    break;
            case 2:
                    a.nonpayingcar();
                    break;
            case 3:
                    a.total();
                    break;
            case 4: 
                    a.display();
                    break;
            default:  cout<<"Invalid Choice!!!!"<<endl;
                    break;

        }
    }while(n!=0);
    return 0;
}