//implementation of queue
#include<iostream>
using namespace std;
#define SZ 5
class MyQueue

{
private:
int q[SZ];
int front, rear;
public:
MyQueue()
{
front = -1;
rear = -1;
}
void enqueue()
{
int data;
cout<<"Enter Data: ";
cin>>data;
if(rear==SZ-1)
{
cout<<"Queue is Full"<<endl;
return;
}
else if(front==-1&&rear==-1)
{
front=rear=0;
q[rear]=data;
}
else
{
rear++;
q[rear] = data;
}
}
void dequeue()
{

if(front==-1&&rear==-1)
{
cout<<"Queue is Empty"<<endl;
return ;

}
else if(front==rear)
{
cout<<"The Deleted element is: "<<q[front]<<endl;
front=rear=-1;
}
else
{
cout<<"The Deleted element is: "<<q[front]<<endl;
front++;
}
}
bool isFull()
{
if(rear==SZ-1)
return true;
else
return false;
}
bool isEmpty()
{
if(front==-1&&rear==-1)
return true;
else
return false;
}
void display()
{
if(front==-1&&rear==-1)
{
cout<<"Queue is Empty"<<endl;
return;
}
else
{
cout<<"The Queue is: ";
for(int i=front;i<=rear;i++)
{
cout<<q[i]<<endl;
}

}
}
};
int main()
{
MyQueue ob;
int ch;
do
{
cout<<endl;
cout<<"1. Enqueue->To Add the element"<<endl;
cout<<"2. Dequeue->To Delete the element"<<endl;
cout<<"3. check if Queue is full"<<endl;
cout<<"4. check if Queue is Empty"<<endl;
cout<<"5. display the Queue"<<endl;
cout<<"6. Exit.ThankYou!!"<<endl;
cout<<endl;
cout<<"Enter the choice: ";
cin>>ch;
cout<<endl;
switch(ch)
{
case 1:
ob.enqueue();
break;
case 2:
ob.dequeue();
break;
case 3:
if(ob.isFull())
cout<<"The Queue is Full"<<endl;
else
cout<<"Have space in Queue"<<endl;
break;
case 4:
if(ob.isEmpty())
cout<<"The Queue is Empty"<<endl;

else
cout<<"Have elements in Queue"<<endl;
break;
case 5:
ob.display();
break;
case 6:
cout<<"Exit. ThankYou!!"<<endl;
break;
default:
cout<<"Please Enter Valid choice"<<endl;
}
}while(ch!=6);
return 0;
}
