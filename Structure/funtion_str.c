#include<stdio.h>
struct st
{
	int i;
	char ch;
	float f;
};
void print(char ,int,float);
void print1(struct st);
void print2(struct st*);
void main()
{
	struct st o1;
	o1={111,'a',123.3};
	print(o1);
	print(&o1);
	printf('\n');
}
void print( char ch,int i,float f)
{
	printf("%c %d %f",ch,i,f);
}
void print1(struct st o1)
{
	printf("%c %d %f",st.ch,st.i,st.f);
}
void print(struct st )
{
	printf("%c %d %f",p->ch,p->i,p->f);
}
