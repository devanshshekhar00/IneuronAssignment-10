#include <stdio.h>
int oddnaturalNumbers(int);

int main()
{
    
    int n;
    printf("Enter a number\t");
    scanf("%d",&n);
    oddnaturalNumbers(n);
   

    
    

    return 0;
}
int oddnaturalNumbers(int number)
{
    for(int i = 1 ; i <=number;i++)
    {
        if(i%2!= 0) printf("%d\n",i);
        
    }
}
