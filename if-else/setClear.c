 #include<stdio.h>
void main(){
int num,pos,c=0;
printf("Enter the number\n");
scanf("%d",&num);
l1:
printf("enter the position\n");
scanf("%d",&pos);
if(pos>=0 && pos <=31)
	if(num&1<<pos)
	printf("set bit\n");
	else
	printf("clear bit\n");
else
{
c++;
printf("wrong bit\n");
if(c<3)
goto l1;
}


}
