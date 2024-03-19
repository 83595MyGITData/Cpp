// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();

#include<iostream>
struct Date{
    int day;
    int month;
    int year;


void initDate(){
    printf("In InitDate\n");
    day=10;
    month=10;
    year=2011;
}
void printDateOnConsole(){
    printf("In PrintDate\n");
    printf("Day:Month:Year: %d:%d:%d\n",day,month,year);
}
void acceptDateFromConsole(){
    printf("In AcceptDate\n");
    printf("Enter Day:Month:Year: \n");
    scanf("%d%d%d",&day,&month,&year);
}
bool isLeapYear(){
    printf("In Leap year Date\n");
    if((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
    {
        return true;
    }
    else
    {
        return false;
    }


}
};

int main()
{
    int n;
    struct Date t;
    do
    {
        printf("--------------------------------------------\n");
        printf("0.Exit\n");
        printf("1.InitDate\n");
        printf("2.PrintDateOnConsole\n");
        printf("3.AcceptDateOnConsole\n");
        printf("4.Check Leap Year ?\n");
        printf("Enter your choice:\n");
        scanf("%d",&n);

        switch(n){

            case 0:printf("-----------Thank you ------------------\n");

                    break;
            case 1:
                    t.initDate();
                    break;
            case 2:
                    t.printDateOnConsole();
                    break;
            case 3:
                    t.acceptDateFromConsole();
                    break;
            case 4:
                     //t.isLeapYear();
                    if(t.isLeapYear())
                    {
                        printf("%d is Leap Year \n",t.year);
                    }
                    else
                    {
                        printf("%d is not Leap Year\n",t.year);
                    }

                    break;
            default :
                    printf("Invalid Choice !!!!!!!!!!\n");
            
        }


    } while (n!=0);
    

    return 0;
}