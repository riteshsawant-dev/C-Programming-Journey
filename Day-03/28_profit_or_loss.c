#include <stdio.h>
int main(void){float cp,sp;scanf("%f%f",&cp,&sp);if(cp<0||sp<0)puts("Invalid price");else if(sp>cp)printf("Profit: %.2f\n",sp-cp);else if(cp>sp)printf("Loss: %.2f\n",cp-sp);else puts("No profit, no loss");return 0;}
