#include<stdio.h>
int main(void){
	char t[]="Tanaka";
	char y[]="Yamamoto";
	char s[]="Suzuki";
	char * a[3];
	a[0] = t;
	a[1] = y;
	a[2] = s;
	printf("%s\n",a[0]);
	printf("%s\n",*(a+1));
	printf("%s\n",a[0][2]);
	printf("%s\n",*(a[1]+2));
	a[0]=a[2];
	printf("%s\n",a[0]);
	a[2][0]='X';
	printf("%s\n",a[0]);
	return 0;
}