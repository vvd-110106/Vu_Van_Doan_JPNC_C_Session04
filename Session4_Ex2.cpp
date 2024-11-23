#include<stdio.h>

int main(){
	// khai bao bien
	int number;
	// cho nguoi dung nhap gia tri tu ban phim
	printf("Ban hay nhap vao chuong trinh mot so:  ");
	scanf("%d", &number);
	// kiem tra so do va cho in ra man hinh
	if (number%2==0) {
		printf("So do chinh la so chan ");
	}else {
		printf("So do la so le ");
	}
	return 0;
}
