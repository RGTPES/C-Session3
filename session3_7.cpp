#include<stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d",&a);
	b = a /1000;

	c = (a % 1000) / 100;
	d = (a % 1000) %100 / 10;
	e = (a % 1000) % 100 %10; 
	printf("tong cac chu so bang %d", b + c + d + e);
}
