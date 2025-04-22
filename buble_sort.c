#include <stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a[9],i,j;
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);	
	}

	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);			
			}
		}	
	}
	for(i=0;i<10;i++){
		printf("order is %d\n",a[i]);	
	}
}






































