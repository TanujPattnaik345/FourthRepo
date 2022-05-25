#include<stdio.h>
int main(){
	int num;
	int sum =0;
	int i;
	printf("Enter the Number\n");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum<num){
		printf("%dNumber is the Deficient Number",num);
	}
	else{
		printf("%dNumber is not the Deficient Number",num);
	}
	return 0;
}
