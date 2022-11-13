#include<stdio.h>
void main()
{
int a=5;	//a contains 2000 address location
int *pa=&a;	//pa contains address of a means 2000
int **ppa=&pa;	//**ppa contans address of pa means 3000

printf("%d",a);
printf("%d",Zpa);
printf("%d",ppa);
}
