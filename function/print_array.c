#include<stdio.h>
void print_araay(const int*p,int n);
void main()
{
	int a[5]={10,20,30,40,50};
	int ele;
	ele=sizeof(a)/sizeof(a[0]);
	print_araay(a,ele);

}
void print_araay(const int*p,int ele)
{
	int i;
	for(i=0;i<ele;i++)
	{
		printf("%d ",*p++);
	}
}
