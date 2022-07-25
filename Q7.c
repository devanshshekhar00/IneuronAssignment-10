#include <stdio.h>
long factorial(long);
long combinations(long,long);

int main()
{
    
    long n,r;
    printf("Enter objects number\t");
    scanf("%ld",&n);
     printf("Enter sample number\t");
    scanf("%ld",&r);
    long result = combinations(n,r);
    printf("%ld",result);
   

    
    

    return 0;
}
long factorial(long number)
{
    if(number==1) return 1;
    return number*factorial(number-1);
}
long combinations(long n,long r)
{
    int g = factorial(n);
    int h = factorial(r)*factorial(n-r);
    return g/h;
    
}
