#include<stdio.h>
int main()
{
	int a[10],n,l,mid,key,pos=-1,i,u;
	printf("\n ENTER THE NUMBER OF ELEMENTS TO BE READ : \n");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENTS: \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("ENTER THE ELEMENT TO BE SEARCHED: \n");
	scanf("%d",&key);
	l = 0;//set lower index to zero
	u = n-1;//set upper index
	while(l<=u)
	{
		mid = (l+u)/2;
		if(key == a[mid])
		{
			pos = mid+1;
			break;
		}
		else if(key<a[mid])
		{
			u = mid-1;
		}
		else
		{
			l = mid+1;
		}
			
		
	}
	if(pos==-1)
		printf("\n%d is not found\n",key);
	else
		printf("\n%d is found at position at %d",key,pos);
}


