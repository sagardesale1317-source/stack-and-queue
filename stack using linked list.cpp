#include<iostream>
 using namespace std;
 class node
 {
    public:
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
 };
 class stack 
 {
    private:
    node *top;
    public:
    stack()
    {
        top=NULL;
    }
    int empty()
    {
        if(top==NULL)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    void push(int x)
    {
        node *p=new node(x);
        p->next=top;
        top=p;

    }
    int pop()
    {
        int x=top->data;
        node *p=top;
        top=top->next;
        delete p;
        return x;
    }
    void display()
    {
        node *q=top;
        while(q!=NULL)
        {
            cout<<endl<<q->data;
            q=q->next;
        }
    }
    int peek()
    {
        return (top->data);
    } 
 };
 int main()
 {
    stack s;
    int x;
    cout<<"Stack after push operation:\n"<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();

    x=s.peek();
    cout<<"Top Element is=\n"<<x<<endl;
    x=s.pop();
    cout<<"Removed Element is=\n"<<x<<endl;
    s.display();
    s.pop();
    s.pop();
    s.pop();


    return 0;

 
 }
 
 