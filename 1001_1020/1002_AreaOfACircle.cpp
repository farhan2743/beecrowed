#include<stdio.h>
#define pi 3.14159

double area (double r){
    return pi*r*r;
}
int main(int argc, char const *argv[])
{
    double rad;
    scanf("%lf",&rad);
    printf("A=%.4lf\n",area(rad));
    return 0;
}
