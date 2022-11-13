#include<stdio.h>
void main(){
int i,j,temp;
printf("Enter the numbers\n");
scanf("%d%d",&i,&j);
/*temp=i;
i=j;
j=temp;*/
/*i=i+j;
j=i-j;
i=i-j;*/
/*i=i*j;
j=i/j;
i=i/j;
*/

//i=i+j-(j=i);
i=i*j/(j=i);



printf("i=%d j=%d",i,j);
}
