#include <stdio.h>
int main(void){float a,d=0;scanf("%f",&a);if(a<0)puts("Invalid amount");else{if(a>=5000)d=a*.20f;else if(a>=2000)d=a*.10f;printf("Discount: %.2f\nFinal amount: %.2f\n",d,a-d);}return 0;}
