#include<stdio.h>
int main(){
	int n;
	 float count1=0.0;
     float count2=0.0;
	float count3=0.0;
	float ratpos,ratneg,ratzero;
	printf("Enter the number for the array");
	scanf("%d",&n);
	int arr[n];
	int i;
		printf("Enter the number\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++){
	
		if(arr[i]>0){
		
		count1++;
	}
		else if(arr[i]<0){
		
		count2++;
	}
		else{
			count3++;
		}
	}
	
	ratpos=(count1)/n;
	ratneg=(count2)/n;
	ratzero=(count3)/n;
		printf("%0.3f\n",ratpos);
			printf("%0.3f\n",ratneg);
				printf("%0.3f",ratzero);

}

