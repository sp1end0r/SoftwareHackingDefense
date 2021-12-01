#include <stdio.h>
#include <stdlib.h>
#define LAB_NAME "STATIC_LAB"

typedef struct _Student{
	char name[16];
	int id;
	int grade;
} Student;

char *str = "Can you see this stirng???";


void welcome(){
	printf("welcome to %s!\n", LAB_NAME);
}

void bye(){
	printf("bye ~\n");
}


int main(){

	Student *s = (Student *)malloc(sizeof(Student));
	char *temp = str;
	

	welcome();
	printf("input your name: ");
	scanf("%s", s->name);
	printf("input your student id: ");
	scanf("%d", &(s->id));
	printf("input your grade (1,2,3,4): ");
	scanf("%d", &(s->grade));


	printf("your name is %s\n", s->name);
	printf("your student id is %d\n", s->id);
	printf("your grade is %d \n", s->grade);

	bye();
	return 0;
}


