#include <stdio.h>
struct employee{
    char    name[30];
    int     empId;
    float   salary;
}; 
int main()
{
    struct employee emp;
     
  
    printf("\nEnter details :\n");
    printf("Name ?:");
     gets(emp.name);
    printf("ID ?:"); 
	scanf("%d",&emp.empId);
    printf("Salary ?:");
	scanf("%f",&emp.salary);
     
    printf("\nEntered detail is:");
     printf("\t\t");
    printf("Name: %s"   ,emp.name);
     printf("\t\t");
    printf("Id: %d"     ,emp.empId);
    printf("\t\t");
    printf("Salary: %f\n\t \t",emp.salary);
    return 0;
}
