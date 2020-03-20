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
cout<<"a="<<a<<"\nb="<<b<<endl;
}
friend complex operator+(complex);
};
complex operator+(complex c){
complex temp;
temp.a=-c.a;
temp.b=-c.b;
return(temp);
}
int main(){
complex c1,c2;
c1.setdata(3,4);
c2=-c1;
c2.displaydata();
return 0;
}
