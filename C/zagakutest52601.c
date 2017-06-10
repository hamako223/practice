#include<stdio.h>
char * func1(char * s){
	*(s+3) = '\0';
	return s;
}
char * func2(char s[]){
	return s + 1;
}
int main(void){
	char a[] = "takatsuki";
	char b[] = "ryozenji";
	char *x;
	char *y;
	x= func1(a);
	printf("%s\n",a);
	printf("%s\n",x);
	y = func2(b);
	printf("%s\n",b);
	printf("%s\n",y);
	return 0;
}
