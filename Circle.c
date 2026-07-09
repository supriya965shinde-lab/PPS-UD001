#include<stdio.h>
int main()
{
	float d,r,area,cir;
	float pie=3.14;
	
	printf("enter diameter:\t");
	scanf("%f",&d);
	r=d/2;
	
	area=3.14*r*r;
	printf("area of circle is %f\n",area);
	
	cir= 2*pie*r;
	printf("cir of circle is %f\n",cir);
    
    return 0;
}
