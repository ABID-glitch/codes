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
complex operator-(){
complex temp;
temp.a=-a;
temp.b=-b;
return(temp);
}
};
int main(){
complex c1,c2;
c2.setdata(5,6);
c2=-c1;
c2.displaydata();
return 0;
}
