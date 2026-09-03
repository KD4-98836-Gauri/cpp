// Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
// day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);
#include<stdio.h>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date *ptrDate)
{
    ptrDate->day =25;
    ptrDate->month=8;
    ptrDate->year=2026;

}
void printDateOnConsole(struct Date *ptrDate)
{
    printf("Date : %d/%d/%d\n",ptrDate->day, ptrDate->month,ptrDate->year);

}
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter day: ");
    scanf("%d",&ptrDate->day);
    printf("enter month:");
    scanf("%d", &ptrDate->month);
    printf("Enter year: ");
    scanf("%d", &ptrDate->year);

}
int menulist(void)
{
    int choice;
    printf("0.Exit\n");
    printf("1.initDate\n");
    printf("2.printDateOnConsole\n");
    printf("3.acceptDateFromConsole\n");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    struct Date d1;
    int choice;
    while((choice =menulist())!=0)
    {
        switch(choice)
        {
            case 1:
            initDate(&d1);
            break;
            case 2:
            printDateOnConsole(&d1);
            break;
            case 3:
            acceptDateFromConsole(&d1);
            break;


        }
    }
    return 0;

}