#include<stdio.h>
int ksmall(int a[],int n,int k)
{
	int i,j;
	int x,temp,min;
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	x=a[k-1];
	return x;
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
	printf("Enter the kth element:");
	scanf("%d",&k);
	
	printf("%dth smallest element is %d",k,ksmall(a,n,k));
}	