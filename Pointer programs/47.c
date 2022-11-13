#include<stdio.h>
	int main()
	{
		char str1[20]= "Hello";
		char *str2= "Hai";
//	 *str3;
		char *str3 = strcat(str1,str2);
		printf("%s  %s\n",str3,str1);
		return 0;
	}
