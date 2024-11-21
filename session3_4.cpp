#include<stdio.h>
int main(){
	float toan,van,anh;
	printf("Nhap vao diem toan\n");
	scanf("%f",&toan);
	printf("Nhap vao diem van\n");
	scanf("%f",&van);
	printf("Nhap vao diem anh\n");
	scanf("%f",&anh);
	printf("tong diem bang: %.2f\n",toan + van + anh);
	printf("tong diem trung binh bang: %.2f",(toan + van + anh) /3);
}
