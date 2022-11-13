#include<stdio.h>
void main(){
int i=0xABCD,a,b,c,d,r,s;
for(i;i;i/=10)
{
r=r%10;
switch(r)
{
case 'A': a=0X00001010;
	break;
case 'B': b=0x00001011;
	break;
case 'C': c=0x00001100;
	break;
case 'D': d=0x00001101;
	break;
}
}
s=a|b|c|d;
s<<=5;
for(i=28;i>=0;i--)
printf("%d",s>>i&1);

}
