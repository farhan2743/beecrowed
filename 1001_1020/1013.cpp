/*Make a program that reads 3 integer values and present 
the greatest one followed by the message "eh o maior". 
Use the following formula:



Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a 
space and the message “eh o maior”.*/



#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int a,b,c,greatest;
    int num1,num2,num3,max;

    scanf("%d%d%d",&a,&b,&c);
    //a>b && a>c ? printf("%d eh o maior\n"),a :b>c && b>a ? printf ("%d eh o maior\n"),b:printf ("%d eh o maior\n"),c ;
    
    (a>b&&a>c)?printf("%d eh o maior\n",a):(c>a&&c>b)?printf("%d eh o maior\n",c):printf("%d eh o maior\n",b);

    //greatest= (a>b&&a>c)?a:(b>a&&b>c)?b:c;
   // max = (num1>num2&&num1>num3)?num1:(num2>num1 && num2 >num3)?num2:num3;
    
   // printf("%d eh o maior\n"),max;
    return 0;

}
