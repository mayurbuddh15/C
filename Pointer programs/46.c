  #include<stdio.h>
              main()
	  {
		char a[]="abcdef";
		char *ptr1 = a;
		ptr1 = ptr1+(strlen(ptr1)-1);
		printf("%c", --*ptr1--);
		printf("%c",--*--ptr1);
		printf("%c",--*(ptr1--));
		printf("%c",--*(--ptr1));
		printf("%c",*ptr1);
	}
