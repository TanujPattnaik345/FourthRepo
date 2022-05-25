#include<stdio.h>
int main(){
	int a=5;
	int *b;
	b=&a;
	printf("\n %u",b);
	printf("\n%d",*b);
	printf("\n%d",(++*b));
	printf("\n%d",(*b++));
	printf("\n%u",b);
}
