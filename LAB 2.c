#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2,img,dis,real;
	printf("Enter the coefficients of the quadratic equation : \n");
	scanf("%f%f%f",&a,&b,&c);
	if(a!=0)
	{
		//calculating discriminant dis using b^2-4ac
		dis = b*b-4*a*c;
		printf("The value of discriminant is %0.2f",dis);
		if(dis==0)
		{
			root1 = -b/(2*a);
			root2 = root1;
			printf("\nThe roots are real and equal\n");
			printf("\nThe two roots are %0.2f and %.2f\n",root1 ,root2);
		}
		else if(dis>0)
		{
			printf("\nroots are real and distinct\n");
			root1 = (-b+sqrt(dis))/(2*a);
			root2 = (-b-sqrt(dis))/(2*a);
			printf("\nThe roots are %0.2f and %0.2f\n",root1,root2);
			
			
		}
		else
		{
			printf("\n roots are imaginary\n");
			real = b/(2*a);
			img = sqrt(fabs(dis))/(2*a);
			printf("\nRoot1 is %0.2f+%0.2fi\n",real,img);
			printf("\nRoot2 is %0.2f-%0.2fi\n",real,img);
		//-b+sqrt(-d)/2a
		//-b-sqrt(-d)/2a
	    }
		
	}
	else
	{
		printf("\nInvalid coefficient\n");
	}
	
}
