#include<iostream>
using namespace std;

struct node{
int value;
struct node *next;
};

struct node *start=NULL;

bool isempty(){
if(start==NULL)
    return true;
    else
        return false;
}

void push(int x){
struct node *p=new node;
p->value=x;
p->next=start;
start=p;
}

void pop(){
if(isempty()){
    cout<<"stack is empty"<<endl;

}
else
{

struct node *p=start;
start=start->next;
delete(p);
}
}

void peek(){
if(isempty())
    cout<<"Stack is empty"<<endl;
    else
        cout<<"Element at the top"<<start->value<<endl;
}

int main(){
int ch,a;
while(1){
cout<<"Is empty"<<endl;
cout<<"push"<<endl;
cout<<"pop"<<endl;
cout<<"peek"<<endl;

cout<<"Enter your choice : "<<endl;
cin>>ch;
switch(ch){
case 1: isempty();break;
case 2: cin>>a;
        push(a);break;
case 3: pop();break;
case 4: peek();break;

default: cout<<"Invalid choice "<<endl;
}
}
}
