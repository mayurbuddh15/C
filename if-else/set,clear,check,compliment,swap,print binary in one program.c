#include<stdio.h>
void main(){
	int i,pos,op,c=1,j;
	char ch;
	printf("Please select the option which you want to performe the task\n 1)Set-Bit\n 2)Clear-Bit\n 3)Check-Bit\n 4)compliemnt Bit\n 5)swap the 2 number\n 6)print the binary of the number\n");
	scanf("%d",&op);
	if(op==1)
	{
		printf("you are selecting option 1 which is for Set-bit\n");
l1:
		printf("press y for continue\n");
		scanf(" %c",&ch);
		if(ch=='y')
		{
			printf("Eneter the number and position which you want to set\n");
			scanf("%d%d",&i,&pos);
			printf("%d",i|1<<pos);
		}
		else
			printf("you are selecting the other character please cross check and try again\n");
		 	if(c<2)
			{
			c++;
			goto l1;
			}
		else
			printf("sorry your time is complete please try again after few time\n");
	
	}
	if(op==2)
	{
		printf("you are selecting option 2 which is for clear-bit\n");
l2:
		printf("press y for continue\n");
		scanf(" %c",&ch);

		if(ch=='y')
		{
			printf("Eneter the number and position which you want to clear\n");
			scanf("%d%d",&i,&pos);
			printf("%d",i&~(1<<pos));
		}
		else
			printf("you are selecting the other character please cross check and try again\n");
			if(c<2)
			{
			c++;
			goto l2;
			}
		else
			printf("sorry your time is complete please try again after few time\n");

	}
	if(op==3)
	{
		printf("you are selecting option 3 which is for Check the bit Set or clear\n");
l3:
		printf("press y for continue\n");
		scanf(" %c",&ch);

		if(ch=='y')
		{
			printf("Eneter the number and position which you want to clear\n");
			scanf("%d%d",&i,&pos);
			printf("%d",(i>>pos)&1);
		}
		else
			printf("you are selecting the other character please cross check and try again\n");
			if(c<2)
			{
			c++;
			goto l3;
			}
		else
			printf("sorry your time is complete please try again after few time\n");

	}
	if(op==4)
	{
		printf("you are selecting option 4 which is for compliment-bit the bit\n");
l4:
		printf("press y for continue\n");
		scanf(" %c",&ch);

		if(ch=='y')
		{
			printf("Eneter the number and position which you want to compliment\n");
			scanf("%d%d",&i,&pos);
			printf("%d",i^1<<pos);
		}
		else
			printf("you are selecting the other character please cross check and try again\n");
			if(c<2)
			{
			c++;
			goto l4;
			}
		else
			printf("sorry your time is complete please try again after few time\n");

	}
	if(op==5)
	{
	printf("Enter the 2 numbers\n");
	scanf("%d%d",&i,&j);
	printf("Befor i=%d and j=%d\n",i,j);
	i=i+j-(j=i);
	printf("after i=%d adn j=%d\n",i,j);
	}
	if(op==6)
	{
	pos=sizeof(i)*8-1;
	printf("Enter the number\n");
	scanf("%d",&i);
	l5:
	printf("%d",i>>pos&1);
	pos--;
	if(pos>=0)
	goto l5;
	printf("\n");

	}
}	
