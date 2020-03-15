#include<iostream>
using namespace std;
class complex{
private:
int a,b;
public:
complex(int x,int y){
a=x;b=y;
}
complex(int k){
a=k;
}
complex(complex &c){
a=a+a.c;
b=b+b.c;
}
};
int main{
complex c1(2,3),c2(6);
complex c3(c1);
return 0;
}
