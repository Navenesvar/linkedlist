#include<stdio.h>
#include<stdlib.h>
struct node
{
int val;
struct node *next;
};
struct node *HEAD,*first,*second,*third,*temp,*newnode,*dummy;
void create();
void traverse();
void insertatbegin();
void insertatend();
void insertrandom();
int main()
{
int choice,ch;
create();

HEAD=first;
do
{
printf("Enter the insertion operation you want to perform\n1.Insert at beginning\n2.Insert in between\n3.Insert at end\n4.Display");
printf("\nEnter here (1/2/3/4):");
scanf("%d",&choice);
if(choice==1)
{
insertatbegin();
}
else if(choice==2)
{

printf("The list contains ...");
traverse();
insertrandom();
}
else if(choice==3)
{
insertatend();
}
else if(choice==4)
{
printf("\nThe list contains...");
traverse();
}
else
{
printf("\nInvalid option");
}
printf("\nDo you want to continue(1/0)?:");
scanf("%d",&ch);
}while(ch!=0);

return 0;
}
//Default first node
void create()
{
first=(struct node *)malloc(sizeof(struct node *));
if(first==NULL)
{
printf("NO MEMORY");
}

else
{
first->val=20;
first->next=NULL;
}
}
// 
Traverse the list
void traverse()
{
temp=(struct node *)malloc(sizeof(struct node *));
temp=HEAD;
while(temp!=NULL)
{
printf("\n%d ",temp->val);
temp=temp->next;
}
//Function to insert a node at the beginning
}
void insertatbegin()
{
newnode=(struct node *)malloc(sizeof(struct node *));
if(newnode==NULL)
{
printf("NO MEMORY");
}
else
{
printf("\nEnter the value ");
scanf("%d",&newnode->val);

newnode->next=HEAD;
HEAD=newnode;

}
}
//Function to insert a node in between
void insertrandom()
{
int search;
dummy=(struct node *)malloc(sizeof(struct node *));
newnode=(struct node *)malloc(sizeof(struct node *));
if(newnode==NULL)
{
printf("NO MEMORY");
}
else
{
printf("\nEnter the element before which the element to be inserted ");
scanf("%d",&search);
printf("\nEnter the value ");
scanf("%d",&newnode->val);
temp=HEAD;
while(temp->val!=search)
{
dummy=temp;
temp=temp->next;
}
dummy->next=newnode;
newnode->next=temp;

}
}
//Function to insert a node at the end
void insertatend()
{
newnode=(struct node *)malloc(sizeof(struct node *));
temp=(struct node *)malloc(sizeof(struct node *));
temp=HEAD;
printf("\nEnter the value :");
scanf("%d",&newnode->val);
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
newnode->next=NULL;
}
