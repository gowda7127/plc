 #include<stdio.h>
int main()
{
	int a[10],n,i,j,temp;
	printf("\n ENTER THE NUMBER OF ELEMENTS : \n");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENTS : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("THE ORIGINAL ARRAY IS \n");
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
		
	}
	printf("\n THE SORTED ARRAY IS : \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
}
