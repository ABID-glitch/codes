#include<iostream>
using namespace std;

struct hash_table{
int data;
hash_table *next;
};

hash_table *sap[10]={NULL};

int hash_function(int a){
int sum=0;
for(int t=a,i=0;i<3;i++,t=t/10)
    sum=sum+t/10;

    while(sum>9){
        int t=sum%10;
        sum=sum/10;
        sum=sum+t;
    }
    return sum;
}

void insert(){
int index;
char ch ='y';

while(ch =='y'){
    hash_table *nw=new hash_table;
    cout<<"Enter sap-id:"<<endl;
    cin>>nw->data;
    nw->next=NULL;

    index=hash_function(nw->data);

    if(sap[index]==NULL)
        sap[index]=nw;

    else{
        hash_table *t;
        for(t=sap[index];t!=NULL;t=t->next){
            t->next=nw;}
    }
        cout<<"Want to continue adding?"<<endl;
        cin>>ch;

}
}

void display(){
cout<<endl;
for(int i=0;i<10;i++){
    cout<<i<<":";
    for(hash_table *t=sap[i];t!=NULL;t=t->next){
        cout<<t->data<<"->";
        cout<<"NULL"<<endl;
    }
}
}

int main(){
int ch;
while(1){
    cout<<"\n1. Insert"<<endl;
    cout<<"\n2. Display"<<endl;
    cout<<"\n ENTER YOUR CHOICE:"<<endl;
    cin>>ch;

    switch(ch){
    case 1: insert();break;
    case 2: display();break;
    case 3: exit(0);break;

    cout<<"Invalid choice"<<endl;}
}
}
