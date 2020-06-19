#include<iostream>
using namespace std;
class test{
int queue[100],front,rear,n;
public:
    test(){
    n=100,front=-1,rear=-1;
    }
    void insert(){
    int val;
    if(rear==n-1){
        cout<<"Queue overflow"<<endl;}
        else{
            if(front==-1)
                front=0;
            cout<<"Insert the element in queue:"<<endl;
            cin>>val;
            rear++;
            queue[rear]=val;
        }
    }

    void Delete(){
    if(front==-1 || front>rear){
        cout<<"Queue underflow"<<endl;
        return;
    }else{
    cout<<"Element deleted from queue is:"<<queue[front]<<endl;
    front++;
    }
    }
void display(){
if(front==-1)
    cout<<"Queue is empty"<<endl;
    else{
        cout<<"Queue elements are:"<<endl;
        for(int i=front;i<=rear;i++)
            cout<<queue[i]<<" ";
        cout<<endl;
}
}
};

int main(){
test s;
int ch;
while(1){
cout<<"\n 1.Insert element to queue"<<endl;
cout<<"\n2. Delete elements in queue"<<endl;
cout<<"\n3. Display all the elements of queue"<<endl;
cout<<"\n4. Exit"<<endl;

cout<<"Enter your choice:"<<endl;
cin>>ch;
switch(ch){
case 1: s.insert();break;
case 2: s.Delete();break;
case 3: s.display();break;
case 4: cout<<"Exit"<<endl;break;

default: cout<<"Invalid choice"<<endl;
}
}
}
