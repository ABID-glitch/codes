#include<iostream>
using namespace std;
class test{
int f=1,n,x;
int factorial;
public:
test(int k){
     factorial=fact(k);
     cout<<"Factorial is : "<<factorial<<endl;
     }

     test(){
     cout<<"Parameterless constructor: no parameter passed"<<endl;
     }

     ~test(){
     cout<<"Terminating program"<<endl;
     }

     int fact(int &no){
     if(no==0)
     return 1;
     if(no<0)
        cout<<"Enter a positive integer"<<endl;
     x=no;
     
     if(no!=1){
        f=f*no;
        no--;
        fact(no);
     }
     return(f);
     }
};

int main(){
int a;
cout<<"Enter a number"<<endl;
cin>>a;
test s(a);
return 0;}
