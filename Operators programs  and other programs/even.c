#include<stdio.h>
void main(){
int i,a[5],even,odd,n;
printf("Enter the number\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0,even=0,odd=0;i<5;i++)
a[i]%2==0?even++:odd++;
printf("even=%d\nodd=%d\n",even,odd);

}
