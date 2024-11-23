#include<stdio.h>

int main(){
	// khai bao bien
	int number;
	// Cho nguoi dung nhap bien
	printf("Ban hay nhap vao mot so nguyen bat ki nhe: ");
	scanf("%d", &number);
	// kiem tra
	if(number%3==0 && number%5==0) {
		printf("So do chia het cho ca 3 va 5");
	}else if(number%3==0) {
		printf("So do chia het cho 3");
	}else if(number%5==0) {
		printf("So do chia het cho 5");
	}else {
		printf("So do khong chia het cho 3,5 hoac ca 3 va 5");
	}
	return 0;
}
