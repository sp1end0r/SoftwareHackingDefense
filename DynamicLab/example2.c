#include <stdio.h>
#include <string.h>
//password is R2verS1ng"

char answer[9] = {0x63, 0x0, 0x45, 0x51, 0x47, 0x65, 0x6, 0x56, 0x5e};

int main(){
	char temp[9]; //R2verS1ng
	char keys[9] = "123456789";
	printf("this is example 2!\n");
	printf("input your answer: ");
	scanf("%s", temp);

	for(int i=0; i<9; i++){
		if (temp[i] ^ keys[i] == answer[i]) continue;
		else{
			printf("Incorrect :P\n");
			return 0;
		}
	}
	printf("Correct answer XD\n");

	return 0;


}
