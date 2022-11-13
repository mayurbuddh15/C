#include<stdio.h>
struct st{
int r;
};
void main(){
struct st s1[5],*p;
p=&s1;
int i;
printf("Enter the data\n");
for(i=0;i<5;i++)
scanf("%d",p[i]->r);
for(i=0;i<5;i++)
printf("%d ",p[i]->r);

}
