#include<stdio.h>
#include<stdlib.h>
struct st
{
int R;
char s[20];
float M;
};
void main()
{
int i;
struct st *p[2];
for(i=0;i<2;i++)
p[i]=malloc(sizeof(struct st));

for(i=0;i<2;i++)
{
printf("Enter the R.no");
scanf("%d",&p[i]->R);
printf("Enter the name");
scanf("%s",p[i]->s);
printf("Enter the M");
scanf("%f",&p[i]->M);
}

for(i=0;i<2;i++)
{
printf("%d %s %f\n",p[i]->R,p[i]->s,p[i]->M);
}

}

