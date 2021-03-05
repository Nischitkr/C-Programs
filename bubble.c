#include<stdio.h>
void main()
{
	int elements[50],n,i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&elements[i]);
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	{
		if(elements[j]>elements[j+1])
		{
			temp = elements[j];
			elements[j] = elements[j+1];
			elements[j+1] = temp;
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",elements[i]);
}
