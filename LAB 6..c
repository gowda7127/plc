#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[30][30],b[30][30],c[30][30],m,n,p,q,i,j,k;
	printf("\nEnter the order of first matrix:\n");
	scanf("%d%d", &m,&n);
	printf("\nEnter the order of 2nd matrix:\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("\nMatrix multiplication is not possible\n");
		printf("\nThe number of columns in the 1st matrix must be equal to number of rows in the 2nd\n");
		exit(0);
	}
	printf("\nEnter %d*%d elements for first matrix:\n", m,n);
	for (i = 0; i < m; i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter %d*%d elements for second matrix:\n",p,q);
	for (i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i <m ; i++)
	{
		for(j=0;j<q;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("\nThe first matrix is:\n");
	for (i = 0; i < m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nThe second matrix is:\n");
	for (i = 0; i < p; i++)
	{
		printf("\n");
		for(j=0;j<q;j++)
		{
			printf("%d\t", b[i][j]);
		}
	}
	printf("\nThe product of two matrices is:\n");
	for (i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
}
