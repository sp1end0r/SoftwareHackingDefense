#include <stdio.h>
#define PASSWORD "C4ny0us22th1sSlmpl2C0D2"

int main(){
	char temp[23];
	printf("input password: ");
	scanf("%s", temp);

	if(temp == PASSWORD){
		printf("Correct!\n");
	}
	else printf("%s is not password :(\n", temp);

	return 0;
}
