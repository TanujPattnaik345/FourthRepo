#include<stdio.h>
int main()
{
    int a[10],size,i,j,k,temp;
    printf("Enter size of the array : \n");
    scanf("%d",&size);
 
    printf("Enter elements you want to enter\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter kth term\n");
  
        scanf("%d",&k);
  
 for (i = 0; i < size; ++i) 
        {
 
            for (j = i+1; j < size; ++j)
            {
 
                if (a[i] > a[j]) 
                {
 
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
 
                }
            }
        }

printf("K'th small element%d", a[k-1]);
return 0;
}
