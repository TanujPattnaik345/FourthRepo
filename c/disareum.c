#include <stdio.h>   
#include<math.h> 
     
//calculateLength() will count the digits present in a number    
   
int main()    
{    
    int num, sum = 0, rem , n;
	printf("Enter the number you want");
	    scanf("%d",&num);
    int len = calcLen(num);    
        
    //Makes a copy of the original number num    
    n = num;    
        
    //Calculates the sum of digits powered with their respective position    
    while(num > 0){    
        rem = num%10;    
        sum = sum + pow(rem,len);    
        num = num/10;    
        len--;    
    }    
        
    //Checks whether the sum is equal to the number itself    
    if(sum == n)    
        printf("%d is a disarium number", n);    
    else    
        printf("%d is not a disarium number", n);    
     
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
     
