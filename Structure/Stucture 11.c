#include<stdio.h>
struct st
{
	int roll_no;
	char name[20];
	float marks;
};
void main()
{
	struct st s[3],temp;
	int ele,i;
	ele=sizeof(s)/sizeof(s[0]);

	for(i=0;i<ele;i++)
	{
		printf("Enter the rooll number\n");
		scanf("%d",&s[i].roll_no);

		printf("Enter the name\n");
		scanf("%s",s[i].name);

		printf("enter the marks\n");
		scanf("%f",&s[i].marks);
	}
	//	for(i=0;i<ele;i++)
	//		printf("%d %s %f\n",s[i].roll_no,s[i].name,s[i].marks);


	printf("Enter the number which you want to sorting\n1)shorting by roll no\n2)sorting by marks\n3)sorting by name\n");

	int t,j;
	scanf("%d",&t);

	switch(t)
	{
		case 1:
			for(i=0;i<ele-1;i++)
			{
				for(j=0;j<ele-i-1;j++)
				{
					if(s[j].roll_no>s[j+1].roll_no)
					{
						temp=s[j];
						s[j]=s[j+1];
						s[j+1]=temp;	
					}
				}
			}
			for(i=0;i<ele;i++)
			{
	//			printf("%d\n",s[i].roll_no);
			printf("%d %s %f\n",s[i].roll_no,s[i].name,s[i].marks);
			}
			break;

		case 2:
			for(i=0;i<ele-1;i++)
			{
				for(j=0;j<ele-i-1;j++)
				{
					if(s[j].marks>s[j+1].marks)
					{
						temp=s[j];
						s[j]=s[j+1];
						s[j+1]=temp;	
					}
				}
			}
			for(j=0;j<ele;j++)
			{
	
	printf("%d %s %f\n",s[i].roll_no,s[i].name,s[i].marks);
//				printf("%f\n",s[j].marks);

			}
			break;


/*		case 3:
			for(i=0;i<ele-1;i++)
			{
				for(j=0;j<ele-i-1;j++)
				{
					if(s[j].marks>s[j+1].marks)
					{
						temp=s[j].name[i];
						s[j].name[i]=s[j+1].name;
						s[j+1].name[i]=temp;	
					}
				}
			
			for(j=0;j<ele;j++)
			{
				printf("%c",s[j].name);
			}*/
	}
}
