#include<stdio.h>
void main(){
int i=258;
char *cp;
cp=(char*)&i;
printf("%d\n",cp);
cp=cp+1;
printf("%d\n",cp);
}
