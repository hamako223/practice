#include <stdio.h>
int main(void) {
int a[3] = { 1, 2, 3 };
int b[2] = { 4, 5 };
int c[2] = { 6, 0 };
int d[4];
int *x[4];
x[0] = a;
x[1] = b;
x[2] = c;
x[3] = d;
printf("%d\n", *(x[0] + 1)); 
printf("%d\n", x[1][1]); 
x[3][0] = x[0][2] + x[1][0];
printf("%d\n", *x[3]); 
x[3] = x[0];
printf("%d\n", *(x[3] + 1)); 
printf("%d\n", x[3][2]); 
printf("%d\n", x[2][0]);
x[2]++;
printf("%d\n", x[2][-1]);
return 0;
}