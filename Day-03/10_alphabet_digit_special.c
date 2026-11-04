#include <stdio.h>

int main(void){char c;scanf(" %c",&c);if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))puts("Alphabet");else if(c>='0'&&c<='9')puts("Digit");else puts("Special character");return 0;}
