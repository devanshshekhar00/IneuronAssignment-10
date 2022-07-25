#include <stdio.h>
int factorial(int);

int main()
{
    
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);
    int result = factorial(n);
    printf("%d",result);
   

    
    

    return 0;
}
int factorial(int number)
{
    if(number==1) return 1;
    return number*factorial(number-1);
}
