#include<stdio.h>

int main(){
	// khai bao bien 
	float chi_so_cu, chi_so_moi, so_dien, tien_dien;
	// cho nguoi dung nhap vao cac so dien
	printf("Nhap vao chi so dien cua thang cu: ");
	scanf("%f", &chi_so_cu);
	printf("Nhap vao chi so dien cua thang moi: ");
	scanf("%f", &chi_so_moi);
	// tinh so dien da dung
	so_dien = chi_so_moi - chi_so_cu;
	// kiem tra xem so dien co hop le khong
	if(so_dien < 0) {
		printf("So dien khong hop le hay nhap lai. ");
		return 1;
	}
	// tinh so tien dien
	if( so_dien < 50) {
		tien_dien = so_dien * 10000;
		printf("Tinh 10.000/Kwh suy ra tien thang nay la: %f \n", tien_dien);
	}else if(so_dien >=50 && so_dien < 100) {
		tien_dien = so_dien * 15000;
		printf("Tinh 15.000/Kwh suy ra tien thang nay la: %f \n", tien_dien);
	}else if(so_dien >=100 && so_dien < 150) {
		tien_dien = so_dien * 20000;
		printf("Tinh 20.000/Kwh suy ra tien thang nay la: %f \n", tien_dien);
	}else if(so_dien >=150 && so_dien < 200) {
		tien_dien = so_dien * 25000;
		printf("Tinh 25.000/Kwh suy ra tien thang nay la: %f \n", tien_dien);
	}else {
		tien_dien = so_dien * 30000;
		printf("Tinh 30.000/Kwh suy ra tien thang nay la: %f \n", tien_dien);
	}
	return 0;
}
