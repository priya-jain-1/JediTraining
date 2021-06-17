// Hello World Program

#include<stdio.h>

void Hello();
void greeting(char[]);

int main(){
	char c[] ="Priya";
	Hello();
	Hello();
	greeting(c);
	return 0;
}

void greeting(char c[]){
	printf("Welcome %s\n", c);
}

void Hello(){	
	printf("Hello World");
	printf(" From Priya ");
}
