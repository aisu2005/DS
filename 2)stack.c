#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
void main()
{
int opt,item,ans;
struct node* start=(struct node*)0;
struct node* push(struct node*,int);
struct node* pop(struct node*);
void display(struct node*);
int search(struct node*,int);
while(1)
{
printf("\n1.Insert \n2.delete\n3.Display\n4.Search\n5.exit\n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Item to push:");
scanf("%d",&item);
start=push(start,item);
break;
case 2:start=pop(start);
break;
case 3:display(start);
break;
case 4:printf("Item to search:");
scanf("%d",&item);
ans=search(start,item);
if(ans==1)
printf("founded....");
else
printf("Not founded...");
break;
case 5:exit(0);
}
}
}
struct node* push(struct node*list,int data)
{
struct node*t;
t=(struct node*)malloc(sizeof(struct node));
t->data=data;
t->next=list;
list=t;
return list;
}
struct node*pop (struct node*list)
{
struct node*t=list;
if(list !=(struct node*)0)
{
printf("Deleted item:%d",list->data);
list=list->next;
free(t);
}
else
printf("list is empty");
return list;
}
void display(struct node*list)
{
while(list !=NULL)
{
printf("%d\n",list->data);
list=list->next;
}
printf("\n");
}
int search(struct node*list,int item)
{
while(list !=NULL)
{
if(list->data==item)
return 1;
list=list->next;
}
return 0;
}


