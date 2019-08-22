#include<stdio.h>
void klarge(int a[],int n,int k)
{
	int i,j;
	int x,temp,max;
	for(i=0;i<k;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[max])
			max=j;
		}
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
		printf(" %d ",a[i]);
	}
	
	
		
		
	
	
}
void main()
{
	int a[20],n,k,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter k:");
	scanf("%d",&k);
	
	klarge(a,n,k);
}