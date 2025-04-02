#include<stdio.h>
#define n 10
int deque[n];
int front=-1;
int rear=-1;
void enqueue_front(int x)
{
if((front==0 && rear==n-1)||(front==rear+1))
    {
	  printf("queue is full");
	}
else if(front==-1 && rear==-1)
    {
	  front=rear=0;
	  deque[front]=x;
	}
else if(front==0)
    {
    	front=n-1;
    	deque[front]=x;
	}
	else
	{
		front--;
		deque[front]=x;
		//return 1;
	}	
}
void enqueue_rear(int x)
{
	if((front==0 && rear==n-1)||(front==rear+1))
    {
	  printf("queue is full");
	}
else if(front==-1 && rear==-1)
    {
	  front=rear=0;
	 deque[rear]=x;
	}
else if(rear==n-1)
    {
    	rear=0;
    	deque[rear]=x;
	}
	else
	{
		rear++;
		deque[rear]=x;
	}	
}
void display()
{
	if(front==-1 && rear==-1)
	{
		printf("queue is empty");
	}
	else
	{
		int i=front;
		while(i!=rear)
		{
			printf("%d\n",deque[i]);
     		i=(i+1)%n;
		}
		printf("%d\n",deque[rear]);
	}
}
int main()
{
	enqueue_front(10);
	enqueue_rear(20);
	enqueue_front(5);
	enqueue_rear(30);
	enqueue_rear(40);
	display();
}