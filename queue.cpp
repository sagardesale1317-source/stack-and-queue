#include<iostream>
using namespace std;
#define max 5
class queue
{
    private:
    int a[max];
    int front;
    int rear;
    public:
   queue()
    {
        front=-1;
        rear=-1;
    }
    int empty()
    {
        if (front==1 && rear==-1) 
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int full()
    {
        if (rear==max-1)
        {
            return 1;

        }
        else
        {
            return 0;
        }
    }
    void enqueue(int x)
    {
       
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;

        }
        else{
            rear++;
        }
        a[rear]=x;
    }
    int dequeue()
    {
        int x=a[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
        return (x);
    }
    int peek()
    {
        return a[front];
    }
    void display()
    {
        for (int i=front;i<=rear;i++)
        {
            cout<<a[i]<<endl;
        }
    }
};
int main()
{
    int x;
    queue q;
    if(!q.full())
    {
      q.enqueue(10);   
    }
    if(!q.full())
    {
      q.enqueue(20);   
    }
     if(!q.full())
    {
      q.enqueue(30);   
    }
     if(!q.full())
    {
      q.enqueue(40);   
    }
    if(!q.full())
    {
      q.enqueue(50);   
    }
    cout<<"queue elements are:"<<endl;
    q.display();
    if(q.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
          cout<<"Removed element is = "<<q.dequeue()<<endl;
    }
    q.display();
     if(q.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
         cout<<"Removed element is = "<<q.dequeue()<<endl;
    }
     q.display();
     if(q.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"Removed element is = "<<q.dequeue()<<endl;
    }
    q.display();
     if(q.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"Removed element is = "<<q.dequeue()<<endl;
          
    }
    q.display();
     if(q.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
          cout<<"Removed element is = "<<q.dequeue()<<endl;
         
    }
     q.display();
     return 0;
}
/*
PS D:\Sagar>  > cd "d:\Sagar\" ; if ($?) { g++ queue.cpp -o queue } ; if ($?) { .\queue }
queue elements are:
10
20
30
40
50
Removed element is = 10
20
30
40
50
Removed element is = 20
30
40
50
Removed element is = 30
40
50
Removed element is = 40
50
Removed element is = 50
1989667408
PS D:\Sagar> */