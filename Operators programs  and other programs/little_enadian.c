#include<stdio.h>
void main(){
int i=10;
char *ch=(char*)&i;
if(ch==0)
printf("Big inadian\n");
else
printf("little inadian\n");


}
