#include <stdio.h>
double circleArea(double radius);
int main()
{
    double radius;
    printf("Enter radius\t");
    scanf("%lf",&radius);
    double area = circleArea(radius);
    printf("%lf",area);

    return 0;
}
double circleArea(double radius)
{
    double area = 3.14*radius;
    return area;
}
