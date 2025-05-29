#include<stdio.h>
int binarysearch(arr[],int size,int key)
{
	int i,low=0,high=size-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]<key)
		low=mid+1;
		else
		high=mid-1;
	}
	return-1;
}
int main()
{
	
}
