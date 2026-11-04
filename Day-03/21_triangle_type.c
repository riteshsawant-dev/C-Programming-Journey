#include <stdio.h>
int main(void){int a,b,c;scanf("%d%d%d",&a,&b,&c);if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a)puts("Invalid triangle");else if(a==b&&b==c)puts("Equilateral");else if(a==b||b==c||a==c)puts("Isosceles");else puts("Scalene");return 0;}
