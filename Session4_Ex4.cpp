#include<stdio.h>

int main(){
	//khai bao bien
	int month;
	// Cho nguoi dung nhap vao so thang trong nam
	printf("Ban hay nhap vao mot thang bat ki trong nam: ");
	scanf("%D", &month);
	// kiem tra
	switch (month) {
		case 1:{
			printf("So ngay trong thang 1 la: 31 ngay ");
			break;
		}
		case 2:{
			printf("So ngay trong thang 2 la: 28 ngay");
			break;
		}
		case 3:{
			printf("So ngay trong thang 3 la: 31 ngay");
			break;
		}
		case 4:{
			printf("So ngay trong thang 4 la: 30 ngay");
			break;
		}
		case 5:{
			printf("So ngay trong thang 5 la: 31 ngay");
			break;
		}
		case 6:{
			printf("So ngay trong thang 6 la: 30 ngay");
			break;
		}
		case 7:{
			printf("So ngay trong thang 7 la: 31 ngay");
			break;
		}
		case 8:{
			printf("So ngay trong thang 8 la: 31 ngay");
			break;
		}
		case 9:{
			printf("So ngay trong thang 9 la: 30 ngay");
			break;
		}
		case 10:{
			printf("So ngay trong thang 10 la: 31 ngay");
			break;
		}
		case 11:{
			printf("So ngay trong thang 11 la: 30 ngay");
			break;
		}
		case 12:{
			printf("So ngay trong thang 12 la: 31 ngay");
			break;
		}
		default:
			printf("So thang khong hop le ");
	}
	return 0;
}
