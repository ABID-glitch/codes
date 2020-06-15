#include<iostream>
using namespace std;

class test{
private:
    int x;
    int factorial=1;
public:
    test(int k){
    factorial=fact(k);
    cout<<"Factorial is "<<factorial<<endl;
    }

    test(){
    cout<<"No parameter passed:parameterless constructor"<<endl;
    }

    ~test(){
    cout<<"Terminating program"<<endl;
    }

    int fact(int &no){
    if(no==0) return 1;
    if(no<0)
        cout<<"Enter a positive integer"<<endl;
      int static f=1;
      x=no;
     if(no!=0){
        f=f*x;
        x--;
        fact(x);
     }
     return(f);
    }

};

int main(){
    int a;
cout<<"Enter a number"<<endl;
cin>>a;
test s(a);
}
