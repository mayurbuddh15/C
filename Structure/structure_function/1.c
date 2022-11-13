#include<stdio.h>
struct m1
{
	char ch;
	int i;
	float f;
};

void print(char,int,float);
void print1(struct m1);			//call by value
void print2(struct m1*);		//call by reference


void main()
{
	struct m1 a={'a',10,22.5};
	print(a.ch,a.i,a.f);
	print1(a);
	print2(&a);
}

void print(char ch,int i,float f)
{
	printf("%c %d %f\n",ch,i,f);
}


void print1(struct m1 a)
{
	printf("%c %d %f\n",a.ch,a.i,a.f);
}


void print2(struct m1 *p)
{
	printf("%c %d %f\n",p->ch,p->i,p->f);
}
