#include<stdio.h>
void main(){
int i=123;
char j='A';
float f=23.5;
void *p;
p=&i;
printf("%d",*(int*)p);
}
