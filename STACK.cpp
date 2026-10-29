#include<iostream>
using namespace std;
#define max 5
class stack
{
    private:
    int a[max];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    int empty()
    {
        if (top==-1)
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
        if (top==max-1)
        {
            return 1;

        }
        else
        {
            return 0;
        }
    }
    void push(int x)
    {
        top++;
        a[top]=x;
    }
    int pop()
    {
        int x=a[top];
        top--;
        return x;
    }
    int peek()
    {
        return a[top];
    }
    void display()
    {
        for (int i=top;i>0;i--)
        {
            cout<<a[i]<<endl;
        }
    }
};
int main()
{
     stack s;
    if(s.full())
    {
        cout<<"Stack is Full"<<endl;
    }
    else
    {
        s.push(10);
        cout<<"Stack contents after a push operation\t"<<endl;
    }
    s.display();

     if(s.full())
    {
        cout<<"Stack is Full";
    }
    else
    {
        s.push(20);
        cout<<"Stack contents after a push operation\t"<<endl;

    }
    s.display();

     if(s.full())
    {
        cout<<"Stack is Full";
    }
    else
    {
        s.push(30);
       
         cout<<"Stack contents after a push operation\t"<<endl;

    }
    s.display();

     if(s.full())
    {
        cout<<"Stack is Full";
    }
    else
    {
        s.push(40);
       
       cout<<"Stack contents after a push operation\t"<<endl;

    }
    s.display();

     if(s.full())
    {
        cout<<"Stack is Full";
    }
    else
    {
        s.push(50);
        
         cout<<"Stack contents after a push operation\t"<<endl;
    }
    s.display();


    if (s.empty())
    {
        cout<<"Stack is empty";
    }
    else
    {
     cout<<"Popped out element is="<<s.pop()<<endl;
    }
    cout<<"stack contents after pop operation:\t"<<endl;
    s.display();
    
     if (s.empty())
    {
        cout<<"Stack is empty";
    }
    else
    {
      cout<<"Popped out element is="<<s.pop()<<endl;
    }
    
    cout<<"stack contents after pop operation:\t"<<endl;
    s.display();

     if (s.empty())
    {
        cout<<"Stack is empty";
    }
    else
    {
      cout<<"Popped out element is="<<s.pop()<<endl;
    }
   cout<<"stack contents after pop operation:\t"<<endl;
    s.display();

     if (s.empty())
    {
        cout<<"Stack is empty";
    }
    else
    {
      cout<<"Popped out element is="<<s.pop()<<endl;
    
   cout<<"stack contents after pop operation:\t"<<endl;
    s.display();

     if (s.empty())
    {
        cout<<"Stack is empty";
    }
    else
    {
     cout<<"Popped out element is="<<s.pop()<<endl;
    }
   
   cout<<"stack contents after pop operation:\t"<<endl;
    s.display();

     if (s.empty())
    {
        cout<<"Stack is empty";
    }
    else
    {
    cout<<"Popped out element is="<<s.pop()<<endl;
    }
    
   cout<<"stack contents after pop operation:\t"<<endl;
    s.display();

    return 0;
}

}

/*PS D:\Sagar Desale> cd "d:\Sagar Desale\" ; if ($?) { g++ STACKK.cpp -o STACKK } ; if ($?) { .\STACKK }
Stack contents after a push operation
10
Stack contents after a push operation
20
10
Stack contents after a push operation
30
20
10
Stack contents after a push operation
40
30
20
10
Stack contents after a push operation
50
40
30
20
10
Stack is Full
50
40
30
20
10
Popped out element is=50
stack contents after pop operation:
40
30
20
10
Popped out element is=40
stack contents after pop operation:
30
20
10
Popped out element is=30
stack contents after pop operation:
20
10
Popped out element is=20
stack contents after pop operation:
Popped out element is=10
stack contents after pop operation:
Stack is emptystack contents after pop operation:
PS D:\Sagar Desale> 
