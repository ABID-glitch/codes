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
};
int main(){
complex obj,*p;
p=&obj;
p->setdata(3,4);
p->displaydata();
return 0;
}
