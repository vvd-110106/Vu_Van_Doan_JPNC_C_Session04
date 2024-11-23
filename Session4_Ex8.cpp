#include<stdio.h>

int main(){
	// khai bao bien
	float canh1, canh2, canh3;
	//cho nguoi dung nhap
	printf("Ban hay nhao vao do dai canh1 ");
	scanf("%f", canh1);
	printf("Ban hay nhao vao do dai canh2 ");
	scanf("%f", canh2);
	printf("Ban hay nhao vao do dai canh3 ");
	scanf("%f", canh3);
	// kiem tra 
	if((canh1+canh2>canh3)|| (canh1+canh3>canh2 ) || (canh2+canh3>canh1) ) {
		printf("Do la ba canh cua 1 tam giac");
	}else{
		printf("Do khong la ba canh cua 1 tam giac");
	}
	return 0;
}
