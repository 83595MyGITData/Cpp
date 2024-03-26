/*
Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]

*/

#include<iostream>
using namespace std;

class Product
{

    int id;
    string title;
    double price;

public:
    virtual void acceptData()
    {
        cout<<"Enter Id:"<<endl;
        cin>>id;
        cout<<"Enter Title:"<<endl;
        cin>>title;
        cout<<"Enter Price:"<<endl;
        cin>>price;

    }
    virtual void displayData()
    {
        cout<<"Id:"<<id<<endl;
        cout<<"Title:"<<title<<endl;
        cout<<"Price:"<<price<<endl;

    }
    double getPrice()
    {
        return price;
    }

    void setPrice(int price)
    {
        this->price=price;
    }    
};


class Book : public Product
{
    string author;
public:
    void acceptData()
    {       
         
        Product::acceptData(); 
        cout<<"Enter Author:"<<endl;
        cin>>author; 
        setPrice(getPrice() - getPrice()*0.10);

    }


    void displayData()
    {
        Product::displayData(); 
        cout<<"Author:"<<author<<endl;
       // cout<<"Price:"<<getPrice()<<endl;
    }
    

};

class Tape : public Product
{
    string artist;

public:
    void acceptData()
    {
        Product::acceptData(); 
        cout<<"Enter Artist:"<<endl;
        cin>>artist;
        setPrice(getPrice() - getPrice()*0.05);

    }

    void displayData()
    {
        Product::displayData(); 
        cout<<"Artist:"<<artist<<endl;
        //cout<<"Price:"<<getPrice()<<endl;
        
    }


};
int main1()
{

    return 0;
}

int main()
{
    int choice;
    Product *pptr[3];
    int index = 0;
    do
    {
        cout<<"---------------------"<<endl;
        cout << "0. Exit" << endl;
        cout << "1. Insert data for Book" << endl;
        cout << "2. Insert data for Tape "<< endl;
        cout << "3. Calculate Bill" << endl;
        cout << "4. Show Products" << endl;
        cout << "Enter choice - ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thank You.." << endl;
            break;
        case 1:
            if (index < 3)
            {
                pptr[index] = new Book();
                pptr[index]->acceptData();
                index++;
            }
            else
                cout << "Array is full.." << endl;
            break;
        case 2:
            if (index < 3)
            {
                pptr[index] = new Tape();
                pptr[index]->acceptData();
                index++;
            }
            else
                cout << "Array is full.." << endl;
            break;
       case 3:
                double total;
                total=0;

                for (int i = 0; i < index; i++)
                total=pptr[i]->getPrice()+total;

                cout<<"Total bill:"<<total<<endl;
            break;

        case 4:
                cout<<"------------------"<<endl;
                for (int i = 0; i < index; i++)
                    pptr[i]->displayData();
                //pptr[i]->calculateBill();
            break;
        default:
            cout << "Wrong choice.." << endl;
            break;
        }
    } while (choice != 0);

    for (int i = 0; i < index; i++)
        delete pptr[i];
    return 0;
}