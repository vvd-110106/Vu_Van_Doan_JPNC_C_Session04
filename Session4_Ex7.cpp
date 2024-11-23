#include<stdio.h>

int main(){
	// khai bao bien 
	int year;
	// cho nguoi dung nhap nam
	printf("Ban hay nhap vao chuong trinh 1 nam: ");
	scanf("%d", &year);
	// kiem tra
	if((year % 4 == 0 && year % 100!= 0) || (year % 400 ==0)) {
		printf(" Nam do chinh la nam nhuan ");
	}else {
		printf(" Nam do khong la nam nhuan ");
	}
	return 0;
}
