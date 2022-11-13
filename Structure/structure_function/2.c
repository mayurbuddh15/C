#include<stdio.h>
struct m1
{
char ch[20];
int i;
float f;
};
void print(struct m1*);


void main()
{
struct m1 a;
print(&a);

}
void print(struct m1 *p)
{
//struct m1 a;
printf("Enter the char init and float\n");
scanf("%s %d %f",p->ch,&p->i,&p->f);
printf("%s %d %f\n",p->ch,p->i,p->f);
}
