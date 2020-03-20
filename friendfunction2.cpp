#include<iostream>
using namespace std;
class B;
class A{
private:
lic:
void setdata(int y){
b=y;
}
friend void fun(A,B);
};
void fun(A o1,B o2){
cout<<"Sum is:"<<o1.a+o2.b<<endl;
}
int main(){
A ob1,ob2;
ob1.setdata(3);
ob2.setdata(4);
fun(ob1,ob2);
return 0;
}int a;
public:
void setdata(int x){
a=x;
}
friend void fun(A,B);
};
class B{
private:
int b;
public:
void setdata(int y){
b=y;
}
friend void fun(A,B);
};
void fun(A o1,B o2){
cout<<"Sum is:"<<o1.a+o2.b<<endl;
}
int main(){
A ob1,ob2;
ob1.setdata(3);
ob2.setdata(4);
fun(ob1,ob2);
return 0;
}
