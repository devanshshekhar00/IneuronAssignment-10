#include <stdio.h>
double simpleIntrest(double,double,int);
int main()
{
    
    double p,r;int t;
    printf("Enter principal\t");
    scanf("%lf",&p);
    printf("Enter rate of intrest\t");
    scanf("%lf",&r);
    printf("Enter time \t");
    scanf("%d",&t);
    double si = simpleIntrest(p,r,t);
    printf("%lf",si);
    

    return 0;
}
double simpleIntrest(double p,double r,int t)
{
    
    double si = p*r*t;
    return si/100;
    
}
