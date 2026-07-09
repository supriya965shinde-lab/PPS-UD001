#include <stdio.h>
int main()
{
	float num1,num2,sub,sum,multi,div;
	
	printf("enter first number:\t");
	scanf("%f",&num1);
	
	printf("enter second number:\t");
	scanf("%f",&num2);
	
	sub=num1-num2;
	
    printf("sub of %f & %d of %f\n",num1,num2,sub);
    
    sum=num1+num2;
   	printf("sum of %f & %f of %f\n",num1,num2,sum);
   	
   	multi=num1*num2;
   	printf("multi of %f & %f of %f\n",num1,num2,multi);
   	
   	div=num1/num2;
   	printf("div of %f & %f of %f\n",num1,num2,div);
   	
   	return 0;
}
