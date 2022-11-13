#include<stdio.h>
void main(){
int num=15,c,pos,s,r;
for(pos=31,c=0,s=0;pos>=0;pos--)
{
if(r=num&1<<pos)
{
c++;
printf("set-bit no=%d ",r);
}
else
s++;
}
printf("one=%d\n zero=%d ",c,s);

}
