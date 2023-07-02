#include<stdio.h>
int add(int,int);
int main(){
	int sum;
	sum=add(10,20);
	printf("sum = %d",sum);
}
int add(int a , int b){
	return a+b;
}
