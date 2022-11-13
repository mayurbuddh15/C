#include<stdio.h>
struct st
{
int rollno;
char name[20];
float marks;
};
void main()
{
struct st s1={10,"abcd",23.5},*p;
p=&s1;
printf("%d %s %f\n",s1.rollno,s1.name,s1.marks);
printf("%d %s %f",p->rollno,p->name,p->marks);
}
