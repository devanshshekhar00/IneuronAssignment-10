
#include <stdio.h>
int checkAll(int ,int);
int main() {
    printf("%d",checkAll(342,9));
    return 0;
}
int checkAll(int j, int k)
{
    int modulus,quotient;
    modulus = j%10;
    quotient = j/10;
    if(modulus == k) 
        {
            return 1;
           
        }
    do
    {
         modulus = quotient%10;
          quotient /= 10;
        if(modulus == k) 
        {
            return 1;
            break;
        }
       
            modulus = quotient%10;
            quotient /= 10;
      
    }while(quotient>10);
    if(modulus == k) 
        {
            return 1;
           
        }
    else return 0; 
    
}


