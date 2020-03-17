#include<iostream>
using namespace std;
class integer{
private:
int a,b;
public:
void setdata(int x){
a=x;
}
void displaydata(){
cout<<"a"<<a<<"b"<<b<<endl;
}
integer operator++(){
integer i;
i.a=++a;
return(i);
}
integer operator++(int){
integer i;
i.a=a++;
return(i);
}
};
int main(){
integer i1,i2;
i1.setdata(7);
i2=++i1;
return 0;
}
