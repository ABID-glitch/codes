#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *l2n;
};
Node *start=NULL;

bool isEmpty()
{
    if(start==NULL)
    return true;
    else
    return false;
}
void push(int x)
    {
        Node *p= new Node;
        p->value=x;
        p->l2n=start;
        start=p;
    }

void pop()
{
    if( isEmpty() )
    {
        cout<<"Stack is Empty";
    }
    else
    {
        Node *p=start;
        start=start->l2n;
        delete(p);
    }
}
void peek()
{
    if( isEmpty() )
    cout<<"Stack is Empty.";
    else
    cout<<"Element at the top="<<start->value;
}


int main()
{
    int choice,a,tmp=1;
    while(tmp==1)
    {
    cout<<"\n1.Push"<<"\n2.Pop"<<"\n3.Peek"<<"\n4.Exit";
    cout<<"\nEnter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"Enter value:";
        cin>>a;
        push(a);
        break;
        case 2:pop();
        break;
        case 3:peek();
        break;
	case 4: tmp=0;
        default:cout<<"**Invalid choice**";

    }
    }
    return 0;
}
