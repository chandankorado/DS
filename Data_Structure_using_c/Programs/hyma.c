/*#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
void printlist(struct node*)
{
    while(n != NULL)
    {
       printf("%d",);
    }
}
int main()
{
    
    return 0;
}*/


#include<stdio.h>
#include<stdlib.h>
//Declared structured node
typedef struct node{
	int value;
	struct node *next;
}node;

int main()
{
	int len,i; 
	printf("enter size of the list=");//Taking no.of nodes from the user
	scanf("%d",&len);
	
	struct node *headnode,*currentnode,*temp;//creating 3 pointers pointing to the struct node
	for(i=0; i<len; i++)
	{
		currentnode=(node*)malloc(sizeof(node));
		printf("enter element %d=",i+1);
		scanf("%d",&currentnode->value);
		printf("\n%d=%u\n",currentnode->value,&currentnode->value);
		if(i==0)
		{
			headnode=temp=currentnode;
			currentnode->next=NULL;
		}
		else
		{
			temp->next=currentnode;
			temp=currentnode;
			currentnode->next=NULL;
		}
		
	}
	temp->next=NULL;
	temp=headnode;
	printf("Linked List=\n");
	printf("starting pointer value=%d\n",temp);
	while(temp!=NULL)
	{
	    printf("|%d|->",temp->value);
		printf("%u|  ",temp->next);
		temp=temp->next;
	}
   
}