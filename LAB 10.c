#include<stdio.h>
struct student
{
	char usn[10];
	char name[10];
	float m1,m2,m3;	
	float avg,total;
};
int main()
{
	struct student s[20];
	int n,i;
	float class_avg=0, class_total;
	printf("Enter the number of student=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the detail of student %d\n",i+1);
		printf("\n Enter USN=");
		scanf("%s",s[i].usn);
		printf("\n Enter Name=");
		scanf("%s",s[i].name);
		printf("Enter the three subject score\n");
		scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].avg=s[i].total/3;
		class_total+=s[i].avg;
	}
	class_avg=class_total/n;
	printf("\nThe class average =%f",class_avg);
	for(i=0;i<n;i++)
	{
		if(s[i].avg>=class_avg)
		printf("\n %s has scored above the average marks",s[i].name);
		else
		printf("\n %s has scored below the average marks",s[i].name);
	}
}