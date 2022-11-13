#include<stdio.h>
void main(){
int ch=0x123,ch1,ch2,c3;
ch1=ch&0xf00;
ch1=ch1>>8;
c3=ch&0x0f0;
c3=c3;
ch2=ch&0x0f;
ch2=ch2<<8;
ch=ch1|c3|ch2;
printf("%x",ch);
}
