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
friend void fun(complex);
};
void fun(complex c){
cout<<"Sum is:"<<c.a<<c.b<<endl;
}
int main(){
complex c1,c2;
c1.setdata(4,5);
fun(c1);
return 0;
}
