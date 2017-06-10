#include <stdio.h>
#include <stdlib.h>
int main(void) {
char * pc;
int * pi;
pc = (char*)malloc(sizeof(char) * 3) ;
if ( pc == NULL ) {
printf("メモリが確保できませんでした．");
exit(1);
}
pi = (int*)malloc(sizeof(int) *5) ;
/* pi のエラー処理は省略． */
free(pc);
free(pi);
return 0;
}
