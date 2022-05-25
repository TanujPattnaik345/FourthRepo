#include <stdio.h>    
     
//isHappyNumber() will determine whether a number is happy or not    
int calchap(int n){    
    int rem = 0, sum = 0;    
        
    //Calculates the sum of squares of digits    
    while(n > 0){    
        rem = n%10;    
        sum = sum + (rem*rem);    
        n = n/10;    
    }    
    return sum;    
}    
        
int main()    
{    
    int num;
	printf("Enter the number\n");
	scanf("%d",&num);    
    int result = num;    
        
    while(result != 1 && result != 4){    
        result = calchap(result);    
    }    
        
    //Happy number always ends with 1    
    if(result == 1)    
        printf("%d is a happy number", num);    
    //Unhappy number ends in a cycle of repeating numbers which contains 4    
    else    
        printf("%d is not a happy number", num);     
     
    return 0;    
}    
