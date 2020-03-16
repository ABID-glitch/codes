#include<iostream>
using namespace std;
class complex{
private:
int a,b;
public:
void setdata(int x,int y){
a=x;b=y;
}
void displaydata(){
cout<<"a="<<a<<"b="<<b<<endl;
}
complex operator+(complex c){
a=a+c.a;
b=b+c.a;
return(c);
}
};
int main(){
complex ob1,ob2,ob3;
ob1.setdata(5,6);
ob2.setdata(7,8);
ob3=ob1+(ob2);
return 0;
}
