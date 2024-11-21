#include<stdio.h>
#include<math.h>
int main(){
	float a,h,s;
	printf("Nhap chieu dai canh day hinh tam giac\n");
	scanf("%f",&a);
	fflush(stdin);
	printf("Nhap chieu dai duong cao hinh tam giac\n");
	scanf("%f",&h);
	
	
	s = (a * h) /2;

	printf("Dien tich hinh tam giac la = %f",s);
}
