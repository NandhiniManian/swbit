#include <stdio.h>
 
void main()
{
    int a, b;
 
    printf("Enter two integers \n");
    scanf("%d%d",&a,&b);
    printf("\n Before swapping a= %d and b = %d", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\n After swapping a= %d and b = %d", a, b);
}
