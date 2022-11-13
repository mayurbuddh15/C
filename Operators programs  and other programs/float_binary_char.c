#include<stdio.h>
void main(){
float f=23.5;
char *cp;
cp=(char*)&f;
cp=cp+3;
int i,pos;

for(i=0;i<4;i++)
{
for(pos=7;pos>=0;pos--){
printf("%d",*cp>>pos&1);
}
cp=cp-1;
}
printf("\n");
}
