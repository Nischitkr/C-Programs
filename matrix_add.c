#include<stdio.h>
#define row_max 10
#define col_max 10
int main()
{
	int m1[row_max][col_max], m2[row_max][col_max],i,j,rows,cols,m3[row_max][col_max];
	scanf("%d%d",&rows,&cols);
	printf("Enter elements of first matrix\n");	
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	scanf("%d",&m1[i][j]);
	printf("Enter elements of second matrix\n");
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	scanf("%d",&m2[i][j]);
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	m3[i][j] = m1[i][j]+m2[i][j];
	for(i=0;i<rows;i++)
	{
	for(j=0;j<cols;j++)
	printf("%d\t",m3[i][j]);
	printf("\n");
	}
}
