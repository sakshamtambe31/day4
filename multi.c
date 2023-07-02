//with argument with return value
#include<stdio.h>
int add(int,int);
int main(){
	int sum;
	sum=multiply(10,20);
	printf("sum = %d",sum);
}
int multiply(int a , int b){
	return a*b;
}

