#include <stdio.h>
int main(void){int x,y;scanf("%d%d",&x,&y);if(x==0&&y==0)puts("Origin");else if(x==0)puts("Y-axis");else if(y==0)puts("X-axis");else if(x>0&&y>0)puts("Quadrant I");else if(x<0&&y>0)puts("Quadrant II");else if(x<0&&y<0)puts("Quadrant III");else puts("Quadrant IV");return 0;}
