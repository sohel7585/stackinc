/*
write a menu driven program to perfrom the following 
operations on STACK.

i. PUSH
ii. POP
iii. DISPLAY
iv. COUNT
v. EXIT

output:

Initially the STACK is empty. top= -1
Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
2
The STACK is empty. Underflow.

Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
3

The STACK is empty. Nothing to display.

Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
4

Total no of elements in the STACK = 0

Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
1

Enter the element to be pushed
12
PUSH operation successful. top = 0

Press 1 to PUSH
Press 2 to POP
Press 3 to DISPLAY
Press 4 to COUNT
Press 5 to EXIT

Enter your choice
1

Enter the element to be pushed
98
PUSH operation successful. top = 1

*/
#include<stdio.h>
#include<stdlib.h>

#define MAX 6

int STACK[MAX];
int top = -1;
void PUSH();
void POP();
void DISPLAY();
int COUNT();

int main(){
	int choice;
	printf("\ninitially the STACK is empty. top = %d",top);
	
	while(1){
		printf("\npress 1 to PUSH \npress 2 to POP\n");
		printf("press 3 to DISPLAY \npress 4 to COUNT\n");
		printf("press 5 to EXIT\n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			  PUSH();
			  break;
			case 2:
			  POP();
			  break;
			case 3:
			  DISPLAY();
			  break;
			case 4:
			  printf("\n total number of elements = %d",COUNT());
			case 5:
			  exit(0);
			default:
			 printf("\nwrong choice");    
		}
	}
	return 0;
}

void PUSH(){
		int data;
		if(top==MAX-1){
			printf("\n The STACKS is full. overflow");
		}else{
			printf("\nEnter the element to be pushed\n");
			scanf("%d",&data);
			top++;
			STACK[top]=data;
		}
	}
	
	void POP()
	{
		int temp;
		if(top== -1)
		{
			printf("\nThe STACK is empty. Underflow.\n");
		}
		else
		{
			temp =STACK[top];
			STACK[top]=NULL;
			top--;
			printf("\nPOP oparation sucessful .\n");
			printf("poped element = %d and top = %d",temp,top);
		}
	}
	
	void DISPLAY(){
		if(top=-1){
			printf("\nThe STACK is empty. Nothing to display.\n");
		}else{
			printf("\nElements in the STACK are\n");
			for(int i=0;i<top;i++){
				printf("%d , ",STACK[i]);
			}
		}
	}
	int COUNT(){
		return(top+1);
	}
	
	
