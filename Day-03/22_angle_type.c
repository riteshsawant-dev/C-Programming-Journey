#include <stdio.h>
int main(void){int a;scanf("%d",&a);if(a<=0||a>=180)puts("Invalid angle");else if(a<90)puts("Acute");else if(a==90)puts("Right");else puts("Obtuse");return 0;}
