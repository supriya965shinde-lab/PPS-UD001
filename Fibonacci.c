#include<stdio.h>
int main()
{

	int num,i,pn=0,nn,cn;
	printf("enter your number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		pn=cn;
		cn=nn;
		nn=pn+cn;
        printf("%d\n",cn);
        }
        return 0;

}
