#include<stdio.h>
void main()
{
	char s[10],m[10],c=0;
	int i,j,a,b;
	printf("Enter the first string");
	scanf("%s",s);
	printf("Enter the second string");
	scanf("%s",m);

	for(a=0;s[a];a++);
	for(b=0;m[b];b++);
	if(a==b)
	{
	for(i=0;s[i];i++)
        {		if(s[i]==m[i]){
			c++;}
	
		//	else
                  //      c=0;
       }
	}
      if(c==a)
	{
	printf("eqal\n");
	}
	else
	{
	printf("not\n");
	}
}
