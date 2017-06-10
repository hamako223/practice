#include <stdio.h>
#include <stdlib.h>
typedef struct {
int v;
char s[32];
} DATA;
int main(void) {
DATA * p;
int i;
p = (DATA*)malloc(sizeof(DATA) * 5) ;
for (i = 0; i < 5; ++i) {
printf("v: ");
scanf("%d", &(p + i)->v );
printf("s: ");
scanf("%s", (p + i)->s );
}
free(p);
for (i = 0; i < 5; ++i) {
printf("v[%d]: %s\n", (p + i)->v, (p + i)->s);
}
return 0;
}
