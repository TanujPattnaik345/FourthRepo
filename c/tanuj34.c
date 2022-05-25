#include<stdio.h>
int main(){
	int arr[10][10];
	int i,j;
	int r;
	int x,y;
	int sum=0;
	printf("Enter the range\n");
	scanf("%d",&r);
	printf("Enter the coordinates X & Y\n");
	scanf("%d %d",&x,&y);
		printf("Enter the array elements\n");
		for(i=0;i<3;i++){
	
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			if((i<=x+r&&i>=x-r)||(j<=y+r&&j>=y-r)){
				sum=sum+arr[i][j];
			}
		}
	}
	printf("the sum is%d \n",sum);
	return 0;
		
}
