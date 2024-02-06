#include<stdio.h>
int main(){
int n;
int total=0;

int digit;
printf("Enter a number : ");
scanf("%d",&n);
int num=n;
while(num>0){
	digit = num%10;
	printf("%d",digit);
	total =total + digit;
	num=num/10;
}
printf("Sum of digits of %d = %d\n",n,total);
return 0;
}
