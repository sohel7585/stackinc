#include<stdio.h>
#include <stdlib.h>
#define max 100

int stack[max];
int top =-1;

void printBinary();
int pop();
void push(int);

int main(){
	int number;
	printf("Decimal to Binary\n");
	scanf("%d",&number);
	
	while (number != 0) {
        int rem = number % 2;
        push(rem);
        number = number / 2;
    }
    if (top == -1) {
        push(0); //when you enter 0
    }
    printBinary();
    
	return 0;
}

void printBinary(){
	printf("Binary represent : ");
	while(top>=0){
		printf("%d",pop());
	}
	printf("\n");
}

int pop(){
	if(top>=0){
		int value = stack[top];
		top--;
		return value;
	}else{
		printf("stack is empty");
		exit(1);
	}
}
void push(int rem) {
    if (top < max - 1) {
        top++;
        stack[top] = rem;
    }
}
