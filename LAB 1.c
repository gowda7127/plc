#include<stdio.h>
int main()
{
	float num1,num2,result;
	int rem;
	char op;
	printf("\nENTER THE OPERATOR (+,-,*,/,\%\%)\n");
	scanf("\n%c",&op);
	printf("ENTER THE VALUES OF OPERANDS:\n");
	scanf("\n%f%f",&num1,&num2);
	
	switch(op)
	{
		case '+' :
			result = num1+num2;
			printf("\n%f + %f = %0.2f",num1,num2,result);
			break;
		
		case '-':result= num1 - num2;
			printf("\n%f - %f = %0.2f",num1,num2,result);
			break;
		
		case '*':result = num1*num2;
			printf("\n%f * %f = %0.2f",num1,num2,result);
			break ;
			
		case '/':if(num2==0)
			     printf("\n DINOMINATOR IS ZERO");
				 else
				 {
				 	result = num1/num2;
					printf("\n%f / %f = %0.2f",num1,num2,result);
				 }
				 break ;
			
		case '%':rem = (int)num1%(int)num2;
			printf("\n%d  \%\% %d = %d",(int)num1,(int)num2,rem);
			break ;
		
		default :
			printf("\nINVALID OPERATOR");
	}
		
}
