#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE],front=0,rear=0;//empty queue
void main()
{
void enque(int);
int opt,item,ans;
int deque();
void display();
int search(int);
while(1)
{
printf("\n 1.Insert\n 2.Delete\n 3.Display\n 4.search\n 5.Exit\n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Item to insert:");
scanf("%d",&item);
enque(item);
break;
case 2:item=deque();
printf("Deleted item=%d",item);
break;
case 3:display();
break;
case 4:printf("Item to search:");
scanf("%d",&item);
ans=search(item);
if(ans==1)
printf("Founded...");
else 
printf("Not founded..");
break;
case 5:exit(0);
}
}//end of while 
}//function to insert an item in circular queue
void enque(int data)                 	  
{
int r1;
r1=(rear+1)%SIZE;
if(r1==front)
printf("Queue is full");
else
{
rear=r1;
que[rear]=data;
}
return;
}
//Function to delete an item from queue
int deque()
{
if(front==rear)
{
printf("Empty Queue");
exit(1);
}
else
{
front=(front+1)%SIZE;
return que[front];
}
}
//Function to display queue contents
void display()
{
int f=front,r=rear;
while(f!=r)
{
f=(f+1)%SIZE;
printf("%d \n",que[f]);
}
return;
}
//Function to search an item in queue
int search(int item)	  
{
int f=front,r=rear;
while(f!=r)	 
{
f=(f+1)%SIZE;
if(que[f]==item)	 
return 1;
}
return 0;
}	  
	         
      
