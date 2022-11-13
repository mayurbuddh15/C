#include<stdio.h>
#include<stdlib.h>
struct st
{
int R;
char name[19];
float marks;
};
void main()
{
struct st *p;
p=malloc(sizeof(struct st));
printf("Enter the R\n");
scanf("%d",&p->R);
printf("Enter the name\n");
scanf("%s",p->name);
printf("Enter the marks\n");
scanf("%f",&p->marks);

printf("%d %s %f",p->R,p->name,p->marks);



}
