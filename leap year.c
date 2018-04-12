#include <stdio.h>
int main()
{
int yr;
printf("Enter a year\n");
scanf("%d",&yr);
if(yr%4==0&&yr%100==0&&yr%400==0)
printf("\nIt is LEAP YEAR.");
else if (yr%4==0 && yr%100!=0)
printf("\nIt is LEAP YEAR.");
else
printf ("\nIt is NOT LEAP YEAR.");
return 0;
}
