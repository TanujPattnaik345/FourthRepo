#include <stdio.h>
struct employee
{
  int empid,salary,hra,da;
  char name[20];
  char designation[30];
  float total;
}emp;
int main()
{ 
  scanf("%s",&emp.name);
   scanf("%s",&emp.designation);
  scanf("%d",&emp.empid);
  scanf("%d",&emp.salary);
  emp.hra=emp.salary*0.2;
  emp.da=emp.salary*0.25;
  printf("Name=%s\n",emp.name);
  printf("DESIGHNATION=%s\n",emp.designation);
  printf("\nId=%d",emp.empid);
  printf("\nHRA=%d",emp.hra);
  printf("\nDA=%d",emp.da,"%");
  
  printf("\nTaking hra and da as 20percent and 25percent \n");
  printf("\nTotal Salary=%.0f",emp.salary+(emp.salary*0.2)+(emp.salary*0.25));

 return 0;
}
