#include <stdio.h>
int main(void){int u;double b;scanf("%d",&u);if(u<0)puts("Invalid units");else{if(u<=100)b=u*1.5;else if(u<=200)b=150+(u-100)*2.5;else b=400+(u-200)*4.0;printf("Bill: %.2f\n",b);}return 0;}
