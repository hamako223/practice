#include <stdio.h>
#include <stdlib.h>
int main(void) {
char * str[5];
int i;
for (i = 0; i < 5; ++i) {
str[i] = (char*)malloc(sizeof(char) * 9) ;
printf("str[%d]: ", i);
scanf("%s", *(str + i));
}
for (i = 0; i < 5; ++i) {
printf("str[%d]: %s\n", i, *(str + i));
}
for (i = 0; i < 5; ++i) {
free(str[i]);
}
return 0;
}
