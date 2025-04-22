#include <stdio.h>
#include <stdlib.h>

void sum(int n1,int d1,int n2,int d2){
	int num,den,p,k;
	num = (n1*d2)+(n2*d1);
	den = d1*d2;
	printf("Result = %d/%d\n",num,den);
	if(num>den){
		p = den;
	}
	else{
		p = num;
	}
	if(p<0){
		p = -p;
	}
	for(k=p;k>1;k--){
		if(num%k==0 && den%k==0){
			num = num/k;
			den = den/k;
		}
	}
	printf("Final Result = %d/%d\n",num,den);
	
}

void dif(int n1,int d1,int n2,int d2){
	int num,den,p,k;
	num = (n1*d2)-(n2*d1);
	den = d1*d2;
	printf("Result = %d/%d\n",num,den);
	if(num>den){
		p = den;
	}
	else{
		p = num;
	}
	if(p<0){
		p = -p;
	}
	for(k=p;k>1;k--){
		if(num%k==0 && den%k==0){
			num = num/k;
			den = den/k;
		}
	}
	printf("Final Result = %d/%d\n",num,den);
	
}

void pro(int n1,int d1,int n2,int d2){
	int num,den,p,k;
	num = n1*n2;
	den = d1*d2;
	printf("Result = %d/%d\n",num,den);
	if(num>den){
		p = den;
	}
	else{
		p = num;
	}
	if(p<0){
		p = -p;
	}
	for(k=p;k>1;k--){
		if(num%k==0 && den%k==0){
			num = num/k;
			den = den/k;
		}
	}
	printf("Final Result = %d/%d\n",num,den);
	
}

void divi(int n1,int d1,int n2,int d2){
	int num,den,p,k;
	num = (n1*d2);
	den = d1*n2;
	printf("Result = %d/%d\n",num,den);
	if(num>den){
		p = den;
	}
	else{
		p = num;
	}
	if(p<0){
		p = -p;
	}
	for(k=p;k>1;k--){
		if(num%k==0 && den%k==0){
			num = num/k;
			den = den/k;
		}
	}
	printf("Final Result = %d/%d\n",num,den);
	
}

void main()
{
	int n1,d1,n2,d2;
	char ch;
	printf("Enter 1st fraction\n");
	scanf("%d%d",&n1,&d1);
	if(d1<=0){
		printf("Input Invalid\n");
		exit(0);	
	}
	printf("Enter 2nd fraction\n");
	scanf("%d%d",&n2,&d2);
	printf("Enter operation\n");
	scanf(" %c",&ch);
	if(ch=='+'){
		sum(n1,d1,n2,d2);
	}
	else if(ch=='-'){
		dif(n1,d1,n2,d2);
	}
	else if(ch=='*'){
		pro(n1,d1,n2,d2);
	}
	else if(ch=='/'){
		divi(n1,d1,n2,d2);
	}
	else{
		printf("Invalid Sign\n");
	}
		
}
