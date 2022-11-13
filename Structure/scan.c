#include<stdio.h>
struct one
{
char ch;
int i;
float f;
};
void main()
{
struct one o1;
printf("Enter the char ....\n");
scanf("%c",&o1.ch);
printf("Enter the int ....\n");
scanf("%d",&o1.i);
printf("Enter the float ....\n");
scanf("%f",&o1.f);

printf("%c %d %f\n",o1.ch,o1.i,o1.f);

}
