#include<stdio.h>

int main(){
	//khai bao bien
	int num1, num2, num3;
	//cho nguoi dung nhap vao cac bien 
	printf("Ban hay nhap bien cho num1 nhe: ");
	scanf("%d", &num1);
	printf("Ban hay nhap bien cho num2 nhe: ");
	scanf("%d", &num2);
	printf("Ban hay nhap bien cho num3 nhe: ");
	scanf("%d", &num3);
	// kiem tra 
	if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)) {
		printf("So thu ba nam trong khoang so thu nhat va so thu 2");
	}else {
		printf("So thu ba khong nam trong khoang so thu nhat va so thu hai");
	}
	return 0;
}
