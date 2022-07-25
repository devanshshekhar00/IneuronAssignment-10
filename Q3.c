#include <stdio.h>
int oddOrEven(int);

int main()
{
    
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);
    int result = oddOrEven(n);
    printf("%d",result);

    
    

    return 0;
}
int oddOrEven(int number)
{
    if(number%2==0) return 1;
    else return 0;
}
