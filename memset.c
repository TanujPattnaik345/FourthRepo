#include <stdio.h>
#include <string.h>

void printArrayvalues(int anyArray[], int anyNumber)
{
    int index;
    for (index=0; index<anyNumber; index++)
        printf("%d ", anyArray[index]);
}

int main(void)
{
    int arrayValues[10];
    
    memset(arrayValues, 0, 10*sizeof(arrayValues[0]));
    printf("Array after memset()\n");

    printArrayvalues(arrayValues, 10);

    return 0;
}
