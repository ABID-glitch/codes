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
friend complex operator+(complex,complex);
};
complex operator+(complex X,complex Y){
complex temp;
temp.a=X.a+Y.a;
temp.b=X.b+Y.b;
return(temp);
}
int main(){
complex c1,c2,c3;
c1.setdata(3,4);
c2.setdata(4,6);
c3=operator+(c1,c2);
c3.displaydata();
return 0;
}
