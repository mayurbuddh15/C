#include<stdio.h>
void main(){
float f;
printf("Enter the mark\n");
scanf("%f",&f);
if(f>=33.5 && f<=50)
printf("gread C\n");
else if(f>=51 && f<=65 )
printf("gread B\n");
else if(f>=65 && f<=90)
printf("gread A\n");
else if(f>=91 && f<=99.99)
printf("gread A+\n");
}
