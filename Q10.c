#include <stdio.h>
void pf(int);
int main() {
    // Write C code here
    int k;
    printf("Enter input\t");
    scanf("%d",&k);
    pf(k);

    return 0;
}
void pf(int k)
{
    if(k%2==0)
    {
        printf("%d\t",2);
        k = k/2;
        
        
    }
    
    for(int i = 3; i <=k;i++)
    {
        if(k%i==0 && i%2!=0  )
        {
            printf("%d\t",i);
            k = k/i;
        }
    }
}
