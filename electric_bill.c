#include <stdio.h>
int main()
{
	int i,f,c;
	float t;
	printf("Enter Initial & Final reading\n");
	scanf("%d%d",&i,&f);
	c = f-i;
	if(c>500){
		t = c*5.50;
	}
	else if(c>200 && c<500){
		t = c*3.50;
	}
	else if(c>100 && c<200){
		t = c*2.50;
	}
	else{
		t = c*1.50;
	}
	printf("Total = %f\n",t);
}

