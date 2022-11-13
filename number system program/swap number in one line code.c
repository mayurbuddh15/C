#include<stdio.h>
void main(){
int i=10,j=20;
i=i^j^(j=i);        // swap the number 
printf("%d%d",i,j);

}
