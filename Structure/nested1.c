#include<stdio.h>
struct date
{
int date;
int month;
int year;
};
struct m1
{

struct date DOB;
struct date DOJ;
};
void main()
{
struct m1 s1;
s1.DOB.date=12;
s1.DOB.month=2;
s1.DOB.year=1999;

s1.DOJ.date=1;
s1.DOJ.month=12;
s1.DOJ.year=2022;

printf("%d-%d-%d\n",s1.DOB.date,s1.DOB.month,s1.DOB.year);
printf("%d-%d-%d\n",s1.DOJ.date,s1.DOJ.month,s1.DOJ.year);
}
