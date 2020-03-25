

// ASSIGNMENT ON OPERETORS BY KARANAM HEMA SUDHA DIWAKAR



/*
1.
BITWISE OPERATORS
bitwise operators are used to do operations on bits
some of them are
 AND(&), OR(|), XOR(^),~,>>,<<
 example:
#include <stdio.h>
int main()
{
     char a = 5, b = 9;
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);
    printf("a|b = %d\n", a | b);
    printf("a^b = %d\n", a ^ b);
    printf("~a = %d\n", a = ~a);
    printf("b<<1 = %d\n", b << 1);
    printf("b>>1 = %d\n", b >> 1);
    return 0;
}
2.
TERENARY OPERATORS
It can be visualized as the short form of if-else conditions
this operator requires three arguments first is condition
second is work to be done if true and third is if it is false.
syntax:
expression-1 ? expression-2 : expression-3
Example:
#include<stdio.h>
int main()
{
   int a=5,b=6,c=7,max;
   max=(a>b)?((a>c)?a:c):((b>c)?b:c);
   printf("%d",max);
   return 0;
}
*/

// calculator
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("The sum of %d and %d is %d\n",a,b,a+b);
    printf("The Difference of %d and %d is %d\n",a,b,a-b);
    printf("The division %d/%d is %f\n",a,b,(float)a/b);
    printf("The operation %d mod %d is %d\n",a,b,a%b);
    return 0;
}
