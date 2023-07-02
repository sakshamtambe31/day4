#include<stdio.h>
int display();
int main(){
	int a;
	a = display();
	printf("a=%d",a);
}
int display(){
	return 10;
}
