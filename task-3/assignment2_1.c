#include <stdio.h>

typedef struct Date
{
   int year;
   int month;
   int day;
}Date;
int main()
{
    Date date1,date2;
    printf("Enter the year of the first date : ");
    scanf("%d",&date1.year);
    printf("Enter the month of the first date : ");
    scanf("%d",&date1.month);
    printf("Enter the day of the first date : ");
    scanf("%d",&date1.day);
    printf("\nEnter the year of the second date : ");
    scanf("%d",&date2.year);
    printf("Enter the month of the second date : ");
    scanf("%d",&date2.month);
    printf("Enter the day of the second date : ");
    scanf("%d",&date2.day);
    if(date1.year==date2.year && date1.month==date2.month && date1.day==date2.day)
        printf("Dates are equal");
    else
        printf("Dates are not equal");
    return 0;
}
