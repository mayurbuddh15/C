#include<stdio.h>
void main(){
int a=0xABCD,i;
for(i=31;i>=0;i--)
{
printf("%d",a>>i&1);

if(i%8==0)
{
printf(" ");
}
}
printf("\n");
a<<=5;
for(i=31;i>=0;i--){
printf("%d",a>>i&1);
if(i%8==0)
printf(" ");}
printf("\n");
}
