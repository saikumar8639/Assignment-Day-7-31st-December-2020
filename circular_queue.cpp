#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int arr[1000],max_size,i,choice,element,front=-1,rear=-1;
	cout<<"\nENTER THE SIZE OF THE CIRCULAR QUEUE\n";
	cin>>max_size;
	while(1)
	{
		cout<<"\nQUEUE MENU\n";
		cout<<" 1.ENQUEUE \n 2.DEQUEUE\n 3.DISPLAY\n 4.EXIT\n";
	    cin>>choice;
		switch(choice)
		{
			case 1: 
			        if((rear==max_size-1&&front==0)||(rear==(front-1)%(max_size-1)))
					{
						cout<<"QUEUE IS FULL\n";
						break;
					}
					else
					{
						cout<<"enter an element to enqueue:\n";
			       		cin>>element;
						if (front==-1)
						{
						front++;
						}
						rear=(rear+1)%max_size;
						arr[rear]=element;
						cout<<"\n!!!!! element is inserted :"<<element<<endl;
					}
			        break;
			case 2:		
					if(front==-1)
					{
						cout<<"queue is empty\n";
						break;
					}
					else if (front==rear)
					{
						front=rear=-1;
					}
					else
					{
						arr[front]=-1;
						front=(front+1)%max_size;
						cout<<"element is popped out\n";
					}
	
			      break;
			case 3: 
			     if(front==-1)
			     {
			     	cout<<"queue is empty\n";
			     	break;
				 }
				 if (rear>=front)
				 {
				 	cout<<"\nqueue elements are:";
					for(i=front;i<=rear&&arr[i]!=-1;i++)
					cout<<"\t"<<arr[i];
					cout<<endl;
				 }
				 else
				 {
				 	cout<<"\nQueue elements are:";
					for(i=front;i<max_size&&arr[i]!=-1;i++)
					cout<<"\t"<<arr[i];
					for(i=0;i<=rear&&arr[i]!=-1;i++)
					cout<<"\t"<<arr[i];
				 }
					
			       break;
			case 4: exit (0) ;
			default:"\nmatch not found\n";
		 } 
	}	
	return 0;
}
