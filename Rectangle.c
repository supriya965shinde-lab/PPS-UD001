#include <stdio.h>
int main()
{
	float L,B,area,perimeter;
	
	printf("enter first number:\t");
	scanf("%f",&L);
	
	printf("enter second number:\t");
	scanf("%f",&B);
	
	area=L*B;
	printf("area of rectangle having %f & %f of %f\n",L,B,area);
	
	perimeter=L+B+L+B;
	printf("perimeter of rectangle having %f & %f of %f\n",L,B,perimeter);
    
    return 0;
}
