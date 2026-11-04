#include <stdio.h>
int main(void){int m,s,e;scanf("%d%d%d",&m,&s,&e);if(m<0||m>100||s<0||s>100||e<0||e>100)puts("Invalid marks");else if(m>=50&&s>=50&&e>=50)puts("Eligible");else puts("Not eligible");return 0;}
