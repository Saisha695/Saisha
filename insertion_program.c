#include<stdio.h>
int main()
{
	int a[50]={10,20,30,40,50};
	int size=5;
	int pos=2;
	int item=25;
	int i,n;
	printf("Element in an array:\n");
	for(i=0;i<size;i++)
	{
		printf("Given Elements is display:%d\n",a[i]);
	}
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=item;
	size++;
	printf("Array after Insertion\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
