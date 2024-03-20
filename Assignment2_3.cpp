/*
Q3. Write a class Address with data members (string building, string street, string city ,int pin)
Implement constructors, getters, setters, accept(), and display() methods.
Test the class functunalities by creating the object of class and calling all the functions.
 */
#include<iostream>
using namespace std;
class Address{
    private:
        string building;
        string street;
        string city;
        int pin;

    public:

    Address()
    {
        building ="Anuja Towers";
        street ="Shaniwar Peth";
        city="Karad";
        pin= 44105;
    }
    Address(string building,string street,string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }
    // Mutator -> Setter
    void setBuilding(string building)
    {
        this->building=building;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    void setStreet(string street)
    {
        this->street = street;
    }
    void setPin(int pin)
    {
        this->pin = pin;
    }

    // Inspectors -> Getter
    string getBuilding()
    {
        return building;
    }
    string getStreet()
    {
        return street;
    }
    string getCity()
    {
        return city;
    }
    int getPin()
    {
        return pin;
    }

    void accept(){
        cout<<"------------------"<<endl;
        cout<<"Enter Building:"<<endl;
        cin>>building;
        cout<<"Enter Street:"<<endl;
        cin>>street;
        cout<<"Enter City:"<<endl;
        cin>>city;
        cout<<"Enter pin:"<<endl;
        cin>>pin;


    }
    void display(){
        cout<<"------------------"<<endl;
        cout<<"Building:"<<building<<endl;
        cout<<"Street:"<<street<<endl;
        cout<<"City:"<<city<<endl;
        cout<<"Pin:"<<pin<<endl;
        cout<<"------------------"<<endl;

    }

};

int main()
{
    Address A1; //default Constructor
    A1.display();

    Address A; 
    A.setBuilding("PQR");
    A.setStreet("ABC");
    A.setCity("XYZ");
    A.setPin(12345);

    cout << "Building - " << A.getBuilding() << endl;
    cout << "Street - " << A.getStreet() << endl;
    cout << "City - " << A.getCity() << endl;
    cout << "Pin - " << A.getPin() << endl;
    //A.display();
    
    Address B;
    B.accept();
    B.display();

    Address C("AA","BB","CC",123123);
    C.display();

    return 0;
}