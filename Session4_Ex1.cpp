#include<stdio.h>

int main(){
	// khai bao bien
	int sobatki;
	// Cho nguoi dung nhap du lieu tu ban phim
	printf("Ban hay nhap vao mot so bat ky: ");
	scanf("%d", &sobatki);
	// kiem tra
	if(sobatki==0) {
		printf("Khong la so nguyen duong cung khong la so nguyen am");
	}else if(sobatki > 0) {
		printf("So bat ki do là so nguyen duong");
	}else {
		printf("So bat ki do la so nguyen am");
	}
	// ket thuc
	return 0;
}
