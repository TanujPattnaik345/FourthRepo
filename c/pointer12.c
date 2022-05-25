#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
		int i;
	printf("Enter the size of the array\n");
	scanf("%d",&num);
	int a[num];
	printf("enter the value");
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
		printf("\n");
	}
	return 0;
}
