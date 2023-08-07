#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],m[10][10],r,c,i,j,k;
	printf("enter no.of rows:");
	scanf("%d",&r);
	printf("enter no.of coloumns:");
	scanf("%d",&c);
	printf("enter elements for first matrix:");
	for (i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements for second matrix:");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("multiplication of matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m[i][j]=0;
			for(k=0;k<c;k++)
			{
				m[i][j] += a[i][k]*b[k][j];
			}
	    }
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	return 0;
}
