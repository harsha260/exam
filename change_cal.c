#include <stdio.h>
#define p_1000_c 1.10
#define d_c 35
#define l_c 2.00
int main()
{
	int p,c;
	double u,b;
	printf("Enter unpaid, previous & current\n");
	scanf("%lf %d %d",&u,&p,&c);
	b=(u>0) ? (c-p)*(p_1000_c)+(l_c)+u+(d_c) : (c-p)*(p_1000_c)+(d_c);
	printf("b = %lf", b);
	return 0;
}
