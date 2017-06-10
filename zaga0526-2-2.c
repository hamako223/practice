#include <stdio.h>
#include <stdlib.h>
int main(void) {
double * a;
int i;
a = (double *) malloc(sizeof(double) * 5);
/* a のエラー処理は省略*/
for (i = 0; i < 5; ++i) {
*(a + i) = (double) (2 * i + 1);
}
printf("%.0f\n", *a); /* 設問1 */
printf("%.0f\n", *(a + 2)); /* 設問2 */
printf("%.0f\n", a[1] * a[3]); /* 設問3 */
free(a);
return 0;
}
