#include <stdio.h>   
#include<math.h>     
int main()    
{    
    int num, sum = 0, q;
   
	printf("Enter the number you want");
	    scanf("%d",&num);
    int len = calcLen(num); 
    while(num>0&&len>0){
    	  q  =num/(pow(10,len-1));
    	 sum =sum+pow(q,len);
    	num = num % (int)pow(10,len-1);
    	 len--;
	}
	printf("the sum is:\n%d",sum);
	return 0;
}

int calcLen(int n){    
    int length = 0;    
    while(n != 0){    
        length = length + 1;    
        n = n/10;    
    }    
    return length;    
}    
     
