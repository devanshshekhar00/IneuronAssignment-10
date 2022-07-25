#include <stdio.h>
void NaturalNumber(int);

int main()
{
    
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);
    naturalNumbers(n);
   

    
    

    return 0;
}
void naturalNumbers(int number)
{
    for(int i = 1 ; i <=number;i++)
    {
        printf("%d\n",i);
    }
}
