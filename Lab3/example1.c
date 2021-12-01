#include <stdio.h>

int foo(int a, int b){
	int num1 = 5;
	int num2 = 6;
	int result;

	result = a+b+num1+num2;

	return result;
}

int main(){
	 int a = 10;
	 int b = 10;
	 int res;

	 printf("call foo!\n");
	 res = foo(a,b);
	 printf("foo's return is %d\n", res);

	 return 0;
}
