#include <stdio.h>
int NaturalNumber(int);

int main()
{
    
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);
    naturalNumbers(n);
   

    
    

    return 0;
}
int naturalNumbers(int number)
{
    for(int i = 1 ; i <=number;i++)
    {
        printf("%d\n",i);
    }
}
