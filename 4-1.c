#include<stdio.h>
#define COUNT 3 //配列数の定数宣言

void input(int *array);
void sort(int *array);
void output(int *array);

int main(void){
	//配列の宣言

	int data[COUNT];

	input(&data[0]);//入力処理
	sort(&data[0]);//並び替え処理
	output(&data[0]);//出力処理

	return 0;

}
//関数の定義
void input(int *array){
	int i;
	printf("3つの数字を入力してください\n");
	for(i=0;i<COUNT;i++){
		scanf("%d",&array[i]);
	}

}
void sort(int *array){
	int i,j,min;
	for(i=0;i<COUNT;i++){
		for(j=i+1;j<COUNT;j++){
			if(array[i]>array[j]){
				min = array[i];
				array[i] = array[j];
				array[j] = min;
			}
		}
	}
}
void output(int *array){
	int i;
	printf("並び替え結果\n");
	for(i=0;i<COUNT;i++){
		printf("%d ",array[i]);
	}
}
