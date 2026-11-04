#include <stdio.h>
int main(void){int n;scanf("%d",&n);if(n%2==0&&n%3==0)puts("Multiple of both");else if(n%2==0)puts("Multiple of 2");else if(n%3==0)puts("Multiple of 3");else puts("Neither");return 0;}
