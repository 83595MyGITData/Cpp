// Write a menu driven program for Date in a C. Declare a structure Date having data members
// day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);

#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;

};

void initDate(struct Date* ptrDate)
{
    printf("\nIn Initdate\n");
    ptrDate->day = 12;
    ptrDate->month=12;
    ptrDate->year=2023;
    

}
void printDateOnConsole(struct Date* ptrDate){
    printf("In printDate\n");
    printf("Day:Month:Year:\t%d:%d:%d\n",ptrDate->day,ptrDate->month,ptrDate->year);

}
void acceptDateFromConsole(struct Date* ptrDate){
    printf("In Acceptdate\n");
    printf("Enter Day:Month:Year:\t \n");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);

}

int main()
{   
    int n;
    struct Date d;
    do{
    printf("-------------------------\n");
    printf("0.Exit\n");
    printf("1.InitDate\n");
    printf("2.AcceptDateOnConsole\n");
    printf("3.PrintDateOnConsole\n");
    printf("Enter your Choice:\n");
    //printf("---------------------------\n");
    scanf("%d",&n);
    
    switch(n)
    {
        case 0: printf("----------Thank you---------------\n");
                break;
        case 1:
                initDate(&d);

                break;
        case 2:
                acceptDateFromConsole(&d);
                break;
        case 3:
                printDateOnConsole(&d);
                break;
        default:
                printf("Invalid Choice !!!!!\n");

    }
    }while(n!=0);

    return 0;
}