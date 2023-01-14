#include<stdio.h>
#include<conio.h>
void main(){
	int a[5]={1,2,3,4,5};
	int b[5]={1,2,3,4,5};
	int c[5];
	int i;
	for(i=0;i<5;i++){
		c[i] = a[i] + b[i];
		printf("\n %d",c[i]);
	}
	getch();
}
