#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number, char gender) {
  //Write your code here.
  int sum=0;
  int i;
  for(i=(gender=='b'?0:1);i<number;i=i+2){
      sum=sum+*(marks+i);
  }
  return sum;
}

int main() {
    int number;
    char gender;
    int sum;
  
    scanf("%d", &number);
    int *marks = (int *) malloc(number * sizeof (int));
 int student;
    for ( student = 0; student < number; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
