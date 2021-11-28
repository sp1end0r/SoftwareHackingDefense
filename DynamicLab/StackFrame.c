#include <stdio.h>

void our_swap(int* num1, int* num2){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	 int a = 10;
	 int b = 10;

	 printf("before swap, a = %d b= %d\n", a, b);
	 our_swap(&a, &b);
	 printf("after swap, a = %d, b = %d\n", a, b);

	 return 0;
}
