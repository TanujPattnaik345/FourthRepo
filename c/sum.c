#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int markssum(int*marks,int number,char gender){
	int sum=0;
	int i;
	for( i=(gender=='b'?0:1);i<number;i=i+2){
		sum=sum+*(marks+i);
		
	}
	return sum;
}
int main(){
	int number;
	char gender;
	int sum;
	scanf("%d",&number);
	int*marks=(int*)malloc(number*sizeof (int));
	int stud;
	for( stud=0;stud<number;stud++){
		scanf("%d",(marks+stud));
	}
	scanf("%c",&gender);
	sum= markssum(marks,number,gender);
	printf("%d",sum);
	free(marks);
	
	return 0;
}

