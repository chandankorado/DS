#include<stdio.h>
#include<stdlib.h>

int n, top = -1, *stack;

void push(int x){
	if(top==n) return;
	stack[++top]=x;
}

int pop(){
	if(top==-1) return -1;
	return stack[top--];
}

int peek(){
	if(top==-1) return -1;
	return stack[top];
}

void display(){
	for(int i=top ; i>-1 ; i--) printf("/n%d /n",stack[i]);
}

int main(){
	printf("Enter size of stack : ");
 	scanf("%d",&n);
	
	stack = (int*)malloc(n*sizeof(int));
	
 
 	do
 	{
		printf("\nchoose \n1.push \n2.pop \n3.peek \n4.display \n5.exit");
		switch(option)
    {
      case 1:
        if(top == n-1)
            printf("Stack overflow!");
        else
        {
            printf("Enter the value to push : ");
            scanf("%d",&val);
            push(stack[],val);
        }
    }
 }
 }
